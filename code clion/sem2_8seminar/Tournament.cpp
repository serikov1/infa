#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

class ResultsTable
{
public:
    // Зарегистрировать новый результат,
    // нас волнуют только баллы, имена пользователей не важны
    void addResult(unsigned int score){
        data.insert(score);
    }

    // Получить минимальный балл из всех результатов за всё время
    unsigned int getMinScore() const{
        return *std::begin(data);
    }

    // Получить, сколько баллов у игрока на заданном месте.
    // Внимание: места нумеруются так, как это принято на турнирах, то есть
    // лучший результат - 1-ое место, за ним 2-ое место и т.д.
    unsigned int getScoreForPosition(int positionNumber) const{
        auto it = std::end(data);
        std::advance(it, - positionNumber);
        return *(it);
    }
private:
    std::multiset<unsigned int> data;
};

using std::cout;
using std::endl;
int main() {

    ResultsTable t;

    t.addResult(30);
    t.addResult(85);
    t.addResult(12);
    t.addResult(31);

    cout << "1st place score: " << t.getScoreForPosition(1) << endl;
    cout << "2nd place score: " << t.getScoreForPosition(2) << endl;
    cout << "3rd place score: " << t.getScoreForPosition(3) << endl;
    cout << "Min score during the tournament: " << t.getMinScore() << endl;
}