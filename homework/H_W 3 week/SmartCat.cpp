#include <iostream>

class NPC {
public:
    // Поговорить с NPC.
    // Что он скажет - зависит от реализации данного метода для конкретного NPC.
    virtual void talk() = 0;

    virtual ~NPC() {};
};

class Animal {
public:
    // Погладить данную зверушку.
    // Последствия зависят от реализации данного метода для класса конкретной зверушки.
    virtual void pet() = 0;

    virtual ~Animal() {};
};
class SmartCat:public NPC, public Animal{
public:
    void pet(){
        std::cout<<"Meow!"<<std::endl;
    }
    void talk(){
        std::cout<<"Meow!"<<std::endl;
    }
};

int main(){
    Animal *a = new SmartCat();
    a->pet();
    delete a;

    // А так - части движка, которые работают с NPC.
    NPC *n = new SmartCat();
    n->talk();
    delete n;
}