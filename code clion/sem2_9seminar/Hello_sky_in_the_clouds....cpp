#include<iostream>
#include <string>
#include <set>
#include <map>
#include <algorithm>

class ResultsHolder {
public:
    /**
     * Добавить в общую таблицу результат экзамена студента.
     * Параметры:
     * - full_name - строка с полным именем студента
     * - mark - оценка (от 1 до 10)
     * (Гарантируется, что совпадений полных имён у разных студентов не бывает.)
     *
     * Если студента с данным именем нет в результатах - добавить его.
     * Если студент с таким именем есть - обновить его результат
     * (потому что апелляции вполне возможны).
     */
    void update(const std::string& full_name, unsigned mark){
        results[full_name] = mark;
    }

    /**
     * Вывести студентов, отсортировав по именам по алфавиту.
     *
     * Вывод в std::cout.
     *
     * Формат вывода:
     * Alex 7
     * Anastasia 9
     * Anny 5
     * Ivan 10
     * Nikita 8
     */
    void print_students() const{
        for(auto& students: results){
            std::cout<<students.first<<' '<<students.second<<std::endl;
        }
    }

    /**
     * Вывести студентов, отсортировав сперва по оценкам по убыванию,
     * а при равных оценках - по именам по алфавиту.
     *
     * Вывод в std::cout.
     *
     * Формат вывода:
     * Ivan 10
     * Anastasia 9
     * Nikita 8
     * Alex 7
     * Anny 5
     */
    void print_standings() const{
        std::map<unsigned int, std::string> reverse_results;
        for(auto&  st: results) reverse_results[st.second] = st.first;
        for(auto i = std::rbegin(reverse_results); i != std::rend(reverse_results); i++){
            std::cout<< i->second <<' '<<i->first<<std::endl;
        }
    }

    /**
     * Обработать запрос военкомата.
     *
     * Военкомат передаёт список имён и хочет призвать этих людей в армию.
     * Если у этих людей неуд-ы (оценка ниже 3), то:
     * - вернуть эти имена в ответе военкомату;
     * - удалить этих людей из общей таблицы (потому что теперь они не студенты).
     *
     * Входной параметр: сет строк с именами, кого хочет призвать военкомат.
     * Возвращаемое значение: сет строк с именами, кого действительно можно призвать
     * (или пустой сет, если призвать никого нельзя).
     * Гарантируется, что военкомат не будет пытаться призвать несуществующих студентов.
     */
    std::set<std::string> process_military_request(const std::set<std::string>& names) {
        std::set<std::string> future_soldier;
        for (int i = 0u; i < names.size(); i++) {
            if (results[*std::next(std::begin(names), i)] < 3) {
                future_soldier.insert(*std::next(std::begin(names), i));
                results.erase(*std::next(std::begin(names), i));
            }
        }
        return future_soldier;
    }
private:
    std::map<std::string, unsigned int> results;
};
//Для тестирования можете использовать следующий базовый пример:

int main() {
// Создали таблицу
    ResultsHolder rh;

// Загрузили результаты
    rh.update("Alex", 6);
    rh.update("Anny", 5);
    rh.update("Ivan", 10);
    rh.update("Anastasia", 9);
    rh.update("Johnny", 1);
    rh.update("Alex", 7); // Апелляция у Alex, оценка обновляется
    rh.update("Nikita", 8);


// Вывели в порядке убывания результата
    std::cout << "Exam results:" << std::endl;
    rh.print_standings();

// Определили, кто идёт в армию
    auto to_military_service = rh.process_military_request({"Johnny", "Ivan"});

// Вывели их на экран
    std::cout << "Are in army now:" << std::endl;
    for (const auto &s: to_military_service) {
        std::cout << s << std::endl;
    }

// Вывели по алфавиту (но уже без Johnny, но Ivan остался с нами)
    std::cout << "Exam results:" << std::endl;
    rh.print_students();
}