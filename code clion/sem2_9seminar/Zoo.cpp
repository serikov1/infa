#include<iostream>
#include <map>

class Animal {
public:
    virtual std::string getType() const = 0;
    virtual ~Animal() {}
};
class ZooKeeper {
public:
    // Создаём смотрителя зоопарка
    ZooKeeper() {} ;

    // Смотрителя попросили обработать очередного зверя.
    void handleAnimal(const Animal& a){
        anim[a.getType()] ++;
    }

    // Возвращает, сколько зверей такого типа было обработано.
    // Если таких не было, возвращает 0.
    int getAnimalCount(const std::string& type) const{
        if(anim.at(type) > 0) return anim.at(type);
        return 0;
    }

private:
    std::map<std::string, int> anim;
};

int main(){
    ZooKeeper z;
    Animal *a = new Monkey();
    z.handleAnimal(*a);
    delete a;
    a = new Monkey();
    z.handleAnimal(*a);
    delete a;
    a = new Lion();
    z.handleAnimal(*a);
    delete a;
    cout << z.getAnimalCount("monkey") << endl;
    cout << z.getAnimalCount("lion") << endl;
    cout << z.getAnimalCount("cat") << endl;
}