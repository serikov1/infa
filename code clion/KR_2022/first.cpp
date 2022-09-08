#include <iostream>

// Кофе-пойнт
class CoffeePoint {
public:
    virtual ~CoffeePoint() = default;

    // Метод возвращает цену кофе по умолчанию в конкретном типе ларька
    virtual int getDefaultPrice() const = 0;
};

// Грузовой автомобиль
class Truck {
public:
    virtual ~Truck() = default;

    // Метод возвращает максимальную скорость автомобиля конкретного типа
    virtual int getMaxSpeed() const = 0;
};

class CoffeeTruck: public CoffeePoint, Truck{
public:
    int getDefaultPrice()  const override{
        return 80;
    };

    int getMaxSpeed() const override{
        return 60;
    };
};