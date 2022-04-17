#include<iostream>
#include<vector>

class Brain {
protected:
    // Здесь хранится что-то очень ценное.
    // Наверное, набор волшебных чисел для нейронной сети, управляющей гоблином.
    std::vector<double> data;

    // А здесь просто фраза, которой гоблин откликается по умолчанию
    std::string phrase;

public:
    // Конструктор мозга
        Brain() {
        // Мозг занимает в памяти много места, да
        data.resize(1000000);
        // Установим эталонную фразу
        phrase = "Booyahg Booyahg Booyahg";
    }

    // Мозг умеет подсказать гоблину, какую фразу выдать
    std::string speak() {
        return phrase;
    }
};

class Goblin{
public:
    // Подходящие конструкторы и деструкторы
    Goblin(){}
    // Просто вернуть фразу, которую гоблину подсказывает мозг
    // (Метод используется для проверки, что голова гоблина содержит правильный мозг)
    std::string speak(){
        return phrase;
    }
    void set_voice(std::string voice){
        this -> phrase = voice;
    }
private:
    std::string phrase;
};

// Получает size - требуемый размер армии. Возвращает вектор гоблинов требуемого размера.
// На всю армию создаёт один мозг, к которому имеют доступ все гоблины армии.
// Мозг можно создать просто как Brain(), либо new Brain(), либо любым другим способом создания объекта.
std::vector<Goblin> create_goblin_army(unsigned int size){
    Brain br;
    std::vector<Goblin> army(size);
    for(auto& goblins: army){
        goblins.set_voice(br.speak());
    }
    return army;
}

int main()
{
    unsigned int size1 = 1;
    unsigned int size2 = 1000;
    std::vector<Goblin> army1 = create_goblin_army(size1);
    std::vector<Goblin> army2 = create_goblin_army(size2);

    for(unsigned int i = 0; i < size1; i++) {
        std::cout << army1[i].speak() << std::endl;
    }
    for(unsigned int i = 0; i < size2; i++) {
        std::cout << army2[i].speak() << std::endl;
    }

    return 0;
}