#include<iostream>
#include<map>
#include<set>

class Tracker
{
public:
    // При любом действии пользователя вызывается этот метод.
    // Методу передаётся:
    // - какой пользователь совершил действие (username);
    // - когда (timestamp - для простоты условные секунды от начала времён).
    // Внимание: не гарантируется, что timestamp расположены строго по
    // возрастанию, в них может быть любой бардак.
    void click(const std::string& username, unsigned long long timestamp){
        usersClick[username].insert(timestamp);
    }

    // По имени пользователя нужно вернуть, сколько всего было кликов
    unsigned long long getClickCount(const std::string& username) const{
        return usersClick.at(username).size();
    }

    // Когда был первый клик
    unsigned long long getFirstClick(const std::string& username) const{
        return *usersClick.at(username).begin();
    }

    // Когда был последний клик
    unsigned long long getLastClick(const std::string& username) const{
        return *(std::prev(usersClick.at(username).end(), 1));
    }

private:
    std::map<std::string, std::set<unsigned long long int>> usersClick;
};

using std::cout, std::endl;
int main(){
    Tracker t;
    t.click("alice", 1000);
    t.click("bob", 1100);
    t.click("alice", 1001);
    t.click("alice", 1200);
    t.click("alice", 1002);
    cout << t.getClickCount("alice") << endl;
    cout << t.getClickCount("bob") << endl;
    cout << t.getFirstClick("alice") << endl;
    cout << t.getFirstClick("bob") << endl;
    cout << t.getLastClick("alice") << endl;
    cout << t.getLastClick("bob") << endl;
}