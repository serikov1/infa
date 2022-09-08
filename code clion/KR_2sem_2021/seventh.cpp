#include<iostream>

class Ball {
public:
    // Попытка сломать шар.
    // Для первого целого шара должна заканчиваться успешно.
    // Если один шар уже был сломан, выбросить std::exception
    // Если пытаемся ломать уже сломанный или потерянный шар, выбросить std::exception
    static void destroy(){
        if(d == 0 and l == 0) {d = 1;}
        throw std::exception();
    }

    // Попытка потерять шар.
    // Для первого целого шара должна заканчиваться успешно.
    // Если один шар уже был потерян, то выбросить std::exception
    // Если пытаемся терять уже сломанный или потерянный шар, выбросить std::exception
    static void lose(){
        if(l == 0 and d == 0) {l = 1;}
        throw std::exception();
    }
private:
    static int d;
    static int l;
};
int Ball::d = 0;
int Ball::l = 0;