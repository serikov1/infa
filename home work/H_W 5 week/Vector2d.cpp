#include <iostream>

class Vector2D
{
public:
    // Конструкторы
    Vector2D(){}
    Vector2D(int x, int y): _x(x), _y(y){}

    // Деструктор
    ~Vector2D()= default;;

    // Получение координат
    int getX() const{
        return _x;
    }
    int getY() const{
        return _y;
    }

    // Задание координат
    void setX(int x){
        _x = x;
    }
    void setY(int y){
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

    friend Vector2D operator* (const int , Vector2D&) ;

    friend std::ostream& operator<<(std::ostream&, const Vector2D&);
    friend std::istream& operator>>(std::istream &, Vector2D&);

private:
    int _x;
    int _y;
};

std::ostream& operator<<(std::ostream& os, const Vector2D& v){
    return os<< "(" << v.getX() << "; " << v.getY() << ")";
}

std::istream& operator>>(std::istream &is, Vector2D &v) {
    return is >> v._x >> v._y;
}
Vector2D operator* (const int a, Vector2D& v){
    Vector2D v1(v._x * a, v._y * a);
    return v1;
}


using std::cout, std::endl, std::cin;
int main(){
    Vector2D v1;
    cin >> v1;
    cout << v1 << endl;
    Vector2D v2;
    cin >> v2;
    cout << v2 << endl;
    cout << std::boolalpha << (v1 == v2) << endl;
    cout << std::boolalpha << (v1 != v2) << endl;
    Vector2D v3 = v1 - v2;
    cout << v3 << endl;
    cout << v3 * 42 << endl;
    cout << 42 * v3 << endl;
}
