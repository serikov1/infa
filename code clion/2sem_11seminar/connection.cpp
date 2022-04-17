#include <iostream>
#include <vector>

class Connector {
public:
    // Конструктор. Получает параметром адрес, куда требуется подключиться.
    // Выполняет необходимую инициализацию соединения.
    // После завершения работы конструктора соединение установлено и готово к работе.
    // Если возникают какие-либо проблемы - выбрасывает exception с описанием проблемы.
    explicit Connector(const std::string& address) {
        for(auto& elem: names){
            if(elem != address) throw std::exception();
        }
    }

    // Отправить по установленному соединению сообщение, текст сообщения передаётся в параметре data.
    // Если возникают какие-либо проблемы - выбрасывает exception с описанием проблемы.
    void sendRequest(const std::string& data) {
    }
private:
    std::string address;
    std::vector<std::string> names;
};

int main() {
    int n;
    std::string name;
    std::cin >> n;
    std::vector<std::string> sites;
    for (auto i = 0; i < n; i++) {
        std::cin >> name;
        sites.push_back(name);
    }
    for (auto &elem: sites) {
        try {
            Connector connector(elem);
            connector.sendRequest("HELLO");
            std::cout << elem << ": ok";
        } catch (std::exception &ex) {
            std::cout << elem << ": " << ex.what();
            continue;
        }
    }
}