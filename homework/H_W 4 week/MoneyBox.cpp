#include <iostream>
#include<map>

class MoneyBox {
public:
    std::map<unsigned int, unsigned int> money_box;
    // Добавить монетку достоинством value
    void addCoin(unsigned int value)
    {
        money_box[money_box.size()] = value ;
    }

    // Получить текущее количество монеток в копилке
    unsigned int getCoinsNumber() const
    {
        return money_box.size();
    }


    // Получить текущее общее достоинство всех монеток
    unsigned int getCoinsValue() const
    {
        unsigned int sum = 0;
        for (auto it : money_box)
        {
           sum += it.second;
        }
        return sum;
    }
};
using std::cout, std::endl;
int main(){

    MoneyBox m;
    // Добавили монетку достоинством 10
    m.addCoin(10);
    // Добавили монетку достоинством 5
    m.addCoin(5);

    // Ожидаем, что монеток внутри 2 штуки
    cout << m.getCoinsNumber() << endl;
    // Ожидаем, что общее достоинство всех монеток 15
    cout << m.getCoinsValue() << endl;
}

