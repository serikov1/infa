#include<iostream>
using std::string, std::cout, std::cin, std::endl;

class Student
{
public:
    // Задать имя студента
    void setName(string name){
        _name = name;
    }

    // Указать количество баллов за контрольную
    void setScore(unsigned int score){
        result = score;
    }

    // Получить имя студента
    string getName() const{
        return _name;
    }

    // Получить количество баллов студента
    unsigned int getScore() const{
        return result;
    }

    friend std::ostream& operator<<(std::ostream&, const Student&);
    friend std::istream& operator>>(std::istream&, Student&);

private:
    string _name;
    unsigned int result;
};

std::ostream& operator<<(std::ostream& os, const Student& s){
    return os << "'" << s.getName()<< "'" <<": " << s.getScore();
}

std::istream& operator>>(std::istream& is, Student& s){
    std::getline(is, s._name);
    return is;
}


int main(){
    Student s;
    cin >> s;
    s.setScore(10);
    cout << s << endl;
}