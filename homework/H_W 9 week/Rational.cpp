#include<iostream>
#include<algorithm>
#include<numeric>

class Delete_to_null: public std::exception {
public:
    explicit Delete_to_null(const std::string &message) : message(message) {}

    const char *what() const noexcept override {
        return message.c_str();
    }

private:
    std::string message;
};

class Not_delete_sign: public std::exception{
public:
    explicit Not_delete_sign(const std::string &message): message(message){}

    const char *what() const noexcept override{
        return message.c_str();
    }

private:
    std::string message;
};


class Rational {
public:
    Rational() = default;
    // Конструктор дроби, здесь a - числитель, b - знаменатель
    Rational(int a, int b): numerator(a), denominator(b) {
        if(b == 0) throw Delete_to_null("Denominator is null, it's not cool (we aren't in matan), please change this ");
    }
    int getNum() const{
        return numerator;
    }
    int getDenom() const{
        return denominator;
    }

    void setNum(int num){
        numerator = num;
    }
    void setDenom(int denom){
        denominator = denom;
    }

    Rational simple_frac(){
        for(int i = 2; i < 10; i++){
            if(numerator % i == 0 and denominator % i == 0){
//                std::cout<< i << " " << this-> getNum() << " " << getDenom()<< std::endl;
                setNum(numerator / i);
                setDenom( denominator / i);
            }
        }
        return *this;
    }

    // Реализуйте операторы:
    // - сложения двух дробей
    Rational operator+(Rational other)  {
        Rational result{};
        auto lcm = std::lcm(denominator, other.denominator);
        result.numerator = numerator * (lcm / denominator) + other.numerator * (lcm / other.denominator);
        result.denominator = lcm;
        result.simple_frac();
        return result;
    }
    // - вычитания двух дробей
    Rational operator-(Rational other){
        Rational result{};
        auto lcm = std::lcm(denominator, other.denominator);
        result.numerator = numerator * (lcm / denominator) - other.numerator * (lcm / other.denominator);
        result.denominator = lcm;
        return result.simple_frac();
    }
    // - умножения двух дробей
    Rational operator*(Rational other){
        Rational result{};
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result.simple_frac();
    }
    // - деления двух дробей
    Rational operator/(Rational other) {
        Rational result{};
        if(other.denominator == 0) throw Delete_to_null("Denominator is null, it's not cool (we aren't in matan), please change this");
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        return result.simple_frac();
    }
    // - умножения дроби на целое число (должно работать при любом порядке операндов)
    friend Rational operator*(int, Rational);

    Rational operator*(int num) {
        Rational result{};
        result.numerator = numerator * num;
        result.denominator = denominator;
        return result.simple_frac();
    }
    // - оператор ввода
    friend std::ostream& operator<<(std::ostream&, Rational);

    // - оператор вывода
    friend std::istream& operator>>(std::istream&, Rational&);

    operator double() const{
        return (numerator*1.) / denominator;
    }

private:
    int numerator, denominator;
};

Rational operator*(int num, Rational frac){
    Rational result{};
    result.numerator = frac.numerator * num;
    result.denominator = frac.denominator;
    return result.simple_frac();
}

std::ostream& operator<<(std::ostream& os, Rational r) {
    r.simple_frac();
    return os << r.getNum() << "/" << r.getDenom();
}

std::istream& operator>>(std::istream& is, Rational& r){
    char sign;
    int numerator, denominator;
    is >> numerator >> sign >> denominator;
    if(sign != 47) throw Not_delete_sign("Not delete sign, please try again with '/' ");
    if(denominator == 0) throw Delete_to_null("Denominator is null, it's not cool (we aren't in matan), please change this");
    r.setNum(numerator);
    r.setDenom(denominator);
    return is;
}

using std::cout, std::endl;
int main()
{
//    Rational r{};
//    try {
//        std::cin >> r;
//        std::cout << r;
//    } catch(Delete_to_null& ex){
//        std::cout<<ex.what();
//    } catch(Not_delete_sign& ex){
//        std::cout<<ex.what();
//    }
    Rational a(2, 4);
    Rational b(2, 4);
    double doub = a;

    cout << doub << endl;
    cout << a << endl;
    cout << b << endl;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << 3 * a << endl;
    cout << b * 4 << endl;

    return 0;
}

