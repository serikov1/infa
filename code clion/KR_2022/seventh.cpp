#include <vector>
#include <iostream>

class Point
{
protected:
    double _x;
    double _y;
    double _z;

public:
    Point(double x, double y, double z): _x(x), _y(y), _z(z) {
    }

    double x() const {
        return _x;
    }

    double y() const {
        return _y;
    }

    double z() const {
        return _z;
    }
};

class Scene
{
public:
    Scene() = default;
    virtual ~Scene() = default;
    // Проверка, должна ли переданная точка входить в нашу сцену.
    // Ваша базовая реализация должна принимать и обрабатывать все точки.
    //
    // Но унаследованные классы будут иметь свою точку зрения на это.
    // (Например, какой-нибудь класс будет игнорировать точки,
    // которые находятся слишком далеко от некоторого логического центра.)
    virtual bool contains(const Point& p) const {
        return true;
    }

    // Добавить точку в сцену.
    // Добавлять нужно только в том случае, если точка входит в сцену по данным метода contains.
    // Хранить точки можно в любом формате, но с сохранением того порядка, в котором они были добавлены.
    void append(const Point& p) {
        if (contains(p)){
            points.push_back(p);
        }
    }

    // Вернуть количество точек в сцене
    unsigned long size() const {
        return points.size();
    }

    // Добавить оператор(ы) для доступа к точкам на чтение по индексам (см. пример вызова ниже).
    Point operator[](int i) {
        return points[i];
    }


private:
    std::vector<Point> points;
};

int main(){
    std::vector<int> data ;
}