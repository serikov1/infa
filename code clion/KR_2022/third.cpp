#include <string>
#include <iostream>

class Truck {
public:
    // Конструктор:
    // - capacity - грузоподъемность
    // - speed - скорость
    // - number - номер (да, это строка)
    Truck(unsigned int capacity, unsigned int speed, const std::string& number):capacity(capacity), speed(speed), number(number){}

    unsigned int getCapacity() const{
        return capacity;
    }
    unsigned int getSpeed() const{
        return speed;
    }
    std::string getNumber() const{
        return number;
    }
    // Дополнительные методы и операторы, которые потребуются
    friend std::ostream& operator<<(std::ostream&, const Truck&);
private:
    unsigned int capacity;
    unsigned int speed;
    const std::string number;
};

std::ostream& operator<<(std::ostream& os,  const Truck& truck){
     os << truck.getNumber() << " " <<truck.getCapacity()<< " " << truck.getSpeed();
     return os;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<Truck> data;
    data.push_back(Truck(10, 10, "a720po"));
    data.push_back(Truck(100, 10, "a721aa"));
    data.push_back(Truck(100, 20, "e721op"));
    data.push_back(Truck(10, 10, "o720po"));

    for(const Truck& c : data) {
        cout << c << endl;
    }
    return 0;
}
