#include<iostream>

class Train
{
public:


    // Создать паровоз массой m,
    // стоящий в начале координат

    Train( double m) : M(m) {}

    // Ехать с текущей скоростью в течение времени dt
    void move(double dt){
        x += dt*v;
    }

    // Изменить полный импульс паровоза (p = mv) на dp
    // Изменение может менять знак скорости
    void accelerate(double dp){
        v+= dp/M;
    }

    // Получить текущую координату паровоза
    double getX(){
        return x;
    }

private:
    double v=0;
    double x=0;
    double M=0;
    double X=0;
};

int main (){
Train t(10);
t.accelerate(1); // Скорость стала 0.1
t.move(1);
std::cout << "Current X: " << t.getX() << std::endl;
t.move(1);
    std::cout << "Current X: " << t.getX() << std::endl;
t.accelerate(-2); // Скорость стала -0.1
t.move(3);
    std::cout << "Current X: " << t.getX() <<std:: endl;
}