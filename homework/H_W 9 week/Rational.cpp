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

    // Реализуйте операторы:
    // - сложения двух дробей
    Rational operator+(Rational other) const{
        auto lcm = std::lcm(denominator, other.denominator);
        return {numerator * (lcm / denominator) +
                other.numerator * (lcm / other.denominator), lcm};
    }
    // - вычитания двух дробей
     Rational operator-(Rational other) const{
        auto lcm = std::lcm(denominator, other.denominator);
        return {numerator * (lcm / denominator) -
                other.numerator * (lcm / other.denominator), lcm};
    }
    // - умножения двух дробей
    Rational operator*(Rational other) const{
        return {numerator * other.numerator, denominator * other.denominator };
    }
    // - деления двух дробей
    Rational operator/(Rational other) const{
        if(other.denominator == 0) throw Delete_to_null("Denominator is null, it's not cool (we aren't in matan), please change this");
        return { numerator * other.denominator, denominator * other.numerator };
    }
    // - умножения дроби на целое число (должно работать при любом порядке операндов)
    friend Rational operator*(int, Rational);

    Rational operator*(int num) const{
        return {numerator * num, denominator};
    }
    // - оператор ввода
    friend std::ostream& operator<<(std::ostream&, const Rational&);

    // - оператор вывода
    friend std::istream& operator>>(std::istream&, Rational);

    int getNum() const{
        return numerator;
    }
    int getDenom() const{
        return denominator;
    }
private:
    int numerator, denominator;
};

Rational operator*(int num, Rational frac){
    return {frac.numerator * num, frac.denominator};
}

std::ostream& operator<<(std::ostream& os, const Rational& r) {
    return os << r.getNum() << "/" << r.getDenom();
}

std::istream& operator>>(std::istream& is, Rational r){
    char sign;
    is >> r.numerator >> sign >> r.denominator;
    if(sign != 47) throw Not_delete_sign("Not delete sign, please try again with '/' ");
    if(r.denominator == 0) throw Delete_to_null("Denominator is null, it's not cool (we aren't in matan), please change this");
    return is;
}

using std::cout, std::endl;
int main()
{
    Rational r{};
    try {
        std::cin >> r;
    } catch(Delete_to_null& ex){
        std::cout<<ex.what();
    } catch(Not_delete_sign& ex){
        std::cout<<ex.what();
    }
//    Rational a(1, 0);
//    Rational b(2, 3);
//
//    cout << a << endl;
//    cout << b << endl;
//    cout << a + b << endl;
//    cout << a - b << endl;
//    cout << a * b << endl;
//    cout << a / b << endl;
//    cout << 3 * a << endl;
//    cout << b * 4 << endl;

    return 0;
}
