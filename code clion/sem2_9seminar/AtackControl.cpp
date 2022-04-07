#include<iostream>
#include<set>
#include<map>


class Connection
{
protected:
    std::string source;
    unsigned short int port;
    unsigned long long timestamp;

public:
    Connection(std::string source, unsigned short int port, unsigned long long timestamp) {
        this->source = source;
        this->port = port;
        this->timestamp = timestamp;
    }
    ~Connection() {}

    std::string getSource() const {
        return source;
    }

    unsigned short int getPort() const {
        return port;
    }

    unsigned long long getTimestamp() const {
        return timestamp;
    }
};

class IntrusionDetector
{
public:
    // Задать временное окно для анализа (см. описание логики выше)
    void setTimeThreshold(unsigned short int timeThreshold){
        duration = timeThreshold;
    }

    // Задать минимальное количество портов для срабатывания (см. описание логики выше)
    void setPortLimit(unsigned short int portLimit){
        ports = portLimit;
    }

    // Вызов этого метода уведомляет анализатор о новом подключении.
    void handleConnection(const Connection& c){
        times_in[c.getSource()].insert(c.getTimestamp());
        num_port[c.getSource()].insert(c.getPort());
    }

    // Проверить, является ли указанный адрес нарушителем
    bool isIntruder(const std::string& source) const {
        int sum = 0;
        auto j = std::begin(num_port.at(source));
        if (( *(std::prev(times_in.at(source).end(), 1)) - *(times_in.at(source).begin())) <= duration) {
            if (times_in.at(source).size() < duration) {
                for (int i = 0u; i < times_in.at(source).size(); i++) {
                    if (*j != *(std::next(j, i))) sum++;
                }
                return sum > ports;
            }
            if (times_in.at(source).size() >= duration) {
                for (int i = 0; i < duration; i++) {
                    if (*j != *(std::next(j, i))) sum++;
                }
                return sum > ports;
            }
        }
        return false;
    }
private:
    std::map<std::string, std::set<unsigned long long>> times_in;
    std::map<std::string, std::multiset<unsigned short int>> num_port;
    unsigned short int ports;
    unsigned short int duration;
};

using std::cout, std::endl, std::boolalpha;
int main(){
    IntrusionDetector id;
    id.setTimeThreshold(5);
    id.setPortLimit(3);

    id.handleConnection({"evil.com", 21, 100504});
    id.handleConnection({"evil.com", 22, 100501});
    id.handleConnection({"evil.com", 23, 100502});
    id.handleConnection({"evil.com", 24, 100503});
    id.handleConnection({"evil.com", 25, 100500});
    cout << boolalpha << "Checking if evil.com is intruder: " << id.isIntruder("evil.com") << endl;

    id.handleConnection({"load.com", 80, 100504});
    id.handleConnection({"load.com", 80, 100501});
    id.handleConnection({"load.com", 80, 100502});
    id.handleConnection({"load.com", 80, 100503});
    id.handleConnection({"load.com", 80, 100500});
    cout << boolalpha << "Checking if load.com is intruder: " << id.isIntruder("load.com") << endl;
}