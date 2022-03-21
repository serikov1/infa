#include <iostream>

template<typename T>
class Vector2D
{
public:
    // Конструкторы
    Vector2D(){}
    Vector2D(T x, T y): _x(x), _y(y){}

    // Деструктор
    ~Vector2D()= default;;

    // Получение координат
    T getX() const{
        return _x;
    }
    T getY() const{
        return _y;
    }

    // Задание координат
    void setX(T x){
        _x = x;
    }
    void setY(T y){
        _y = y;
    }

    // Перегруженный оператор - сравнение двух векторов на равенство
    bool operator== (const Vector2D& v2) const{
        if(_x == v2.getX() and _y == v2.getY()) return true;
        return false;
    }

    // Ещё один перегруженный оператор - неравенство векторов
    // Да, это отдельный оператор! Хинт - настоящие джедаи смогут для != использовать уже написанное ==
    bool operator!= (const Vector2D& v2) const{
        if(_x != v2.getX() and _y != v2.getY()) return true;
        return false;
    }

    // Сумма двух векторов, исходные вектора не меняются, возвращается новый вектор
    Vector2D operator+ (const Vector2D& v2) const{
        Vector2D v3(_x + v2.getX(), _y + v2.getY());
        return v3;
    }

    // Вычитание векторов, исходные вектора не меняются, возвращается новый вектор
    Vector2D operator- (const Vector2D& v2) const{
        Vector2D v3(_x - v2.getX(), _y - v2.getY());
        return v3;
    }

    // Оператор умножения вектора на скаляр, исходный вектор не меняется, возвращается новый вектор
    Vector2D operator* (const int a) const{
        Vector2D v3(_x * a, _y * a);
        return v3;
    }

    template<typename R>
    friend Vector2D<R> operator* (int , const Vector2D<R>&) ;

    template<typename R>
    friend std::ostream& operator<<(std::ostream&, const Vector2D<R>&);

    template<typename R>
    friend std::istream& operator>>(std::istream &, Vector2D<R>&);

private:
    T _x;
    T _y;
};

template<typename R>
std::ostream& operator<<(std::ostream& os, const Vector2D<R>& v){
    return os<< "(" << v.getX() << "; " << v.getY() << ")";
}

template<typename R>
std::istream& operator>>(std::istream &is, Vector2D<R>&v) {
    return is >> v._x >> v._y;
}

template<typename R>
Vector2D<R> operator* (int a, const Vector2D<R>& v){
    Vector2D<R> v1( a * v.getX(), a * v.getY());
    return v1;
}

using std::cout, std::endl, std::cin;
int main(){
    Vector2D<int> v1;
    cin >> v1;
    cout << "Read vector: " << v1 << endl;
    cout << "Vector multiplied by 42: " << v1 * 42 << endl;

    Vector2D<double> v2;
    cin >> v2;
    cout << "Read vector: " << v2 << endl;
    cout << "Vector multiplied by 42: " << 42 * v2 << endl;
}