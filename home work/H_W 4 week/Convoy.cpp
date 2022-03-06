#include <iostream>
#include <vector>

class Car
{
protected:
    bool allowesBoarding;
    bool allowesLoading;
    unsigned int numberOfSeats;
    unsigned int numberOfContainers;

public:
    Car(bool allowesBoarding, bool allowesLoading, unsigned int numberOfSeats, unsigned int numberOfContainers) {
        this->allowesBoarding = allowesBoarding;
        this->allowesLoading = allowesLoading;
        this->numberOfSeats = numberOfSeats;
        this->numberOfContainers = numberOfContainers;
    }
    ~Car() {}

    bool isBoardingAllowed() const {
        return allowesBoarding;
    }

    bool isLoadingAllowed() const {
        return allowesLoading;
    }

    unsigned int getNumberOfSeats() const {
        return numberOfSeats;
    }

    unsigned int getNumberOfContainers() const {
        return numberOfContainers;
    }
};


class ConvoyManager
{
public:
    std::vector<Car> column;
    // Зарегистрировать новую машину в колонне
    void registerCar(const Car& c){
        column.push_back(c);
    }


    // Сообщить, сколько всего пассажиров может принять колонна
    unsigned int getTotalSeats() const{
        int seats = 0;
        for(const auto & i : column){
            if(i.isBoardingAllowed())
            seats += i.getNumberOfSeats();
        }
        return seats;
    }

    // Сообщить, сколько всего грузовых контейнеров может взять колонна
     unsigned int getTotalContainers() const{
        int contain = 0;
        for(const auto & i : column){
            if(i.isLoadingAllowed())
            contain += i.getNumberOfContainers();
        }
        return contain;
    }
};

using std::cout, std::endl;

int main(){
    ConvoyManager cm;

    Car c1(true, false, 12, 3);
    cm.registerCar(c1);
    Car c2(false, true, 12, 3);
    cm.registerCar(c2);
    Car c3(true, true, 12, 3);
    cm.registerCar(c3);
    Car c4(false, false, 12, 3);
    cm.registerCar(c4);

    cout << "Total available seats: " << cm.getTotalSeats() << endl;
    cout << "Total available containers: " << cm.getTotalContainers() << endl;
}