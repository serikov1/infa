#include <iostream>
#include <vector>
#include <numeric>

class MoneyBox {
public:
    // Конструктор и деструктор, если нужны

    // Добавить монетку достоинством value
    void addCoin(unsigned int value){
        money.push_back(value);
    }

    // Получить текущее количество монеток в копилке
    unsigned int getCoinsNumber() const{
        return money.size();
    }

    // Получить текущее общее достоинство всех монеток
    unsigned int getCoinsValue() const{
        return std::accumulate(money.begin(), money.end(), 0);
    }
private:
    std::vector<unsigned int> money;
};
using namespace std;
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