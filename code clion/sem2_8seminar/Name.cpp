#include<vector>
#include<algorithm>
#include<iostream>

class Person
{
public:
    // Создать человека с ФИО
    Person() = default;
    Person(std::string surname, std::string name, std::string middleName):surname(surname), name(name), middleName(middleName){}

    bool operator<(Person &other){
       if(surname != other.surname) return surname < other.surname;
       else if (name != other.name) return name < other.name;
       else return middleName < other.middleName;
    }
    friend std::istream& operator>>(std::istream&, Person&);
    friend std::ostream& operator<<(std::ostream&,Person);
private:
    std::string surname;
    std::string name;
    std::string middleName;
};
std::istream& operator>>(std::istream& is, Person& p){
    return is >> p.surname >>p.name >>p.middleName;
}
std::ostream& operator<<(std::ostream& os, Person p){
    return os<<p.surname<<" "<<p.name<<" "<<p.middleName;
}


using std::cout;
using std::endl;
using std::cin;
int main(){
    cout << "Testing I/O" << endl;
    Person p;
    cin >> p;
    cout << p << endl;

    cout << "Testing sorting" << endl;
    std::vector<Person> people;
    people.push_back(Person("Ivanov", "Ivan", "Ivanovich"));
    people.push_back(Person("Petrov", "Petr", "Petrovich"));
    people.push_back(Person("Ivanov", "Ivan", "Petrovich"));
    people.push_back(Person("Ivanov", "Petr", "Ivanovich"));

    sort(people.begin(), people.end());
    for(std::vector<Person>::const_iterator it = people.begin(); it < people.end(); it++) {
        cout << *it << endl;
    }
}