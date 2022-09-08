#include <iostream>
#include <vector>
#include <cmath>

class Point2D
{
protected:
    double _x;
    double _y;

public:
    // Конструктор точки с заданными координатами
    Point2D(double x, double y): _x(x), _y(y) {
    }

    // Получить координату X точки
    double x() const {
        return _x;
    }

    // Получить координату Y точки
    double y() const {
        return _y;
    }
};

#include <vector>

class Polygon
{
public:
    // Конструктор, создаёт многоугольник из набора точек.
    // Точки передаются в порядке обхода многоугольника по контуру.
    Polygon(const std::vector<Point2D>& points): points(points){}

    // Возвращает периметр многоугольника
    double perimeter() const{
        double perimeter = 0;
        for(unsigned int i = 1; i < points.size(); i++){
            perimeter += sqrt((points[i].x() - points[i - 1].x())*(points[i].x() - points[i - 1].x()) + (points[i].y() - points[i - 1].y())*(points[i].y() - points[i - 1].y()));
        }
        perimeter+=sqrt((points[0].x() - points[points.size() - 1].x())*(points[0].x() - points[points.size() - 1].x()) + (points[0].y() - points[points.size() - 1].y())*(points[0].y() - points[points.size() - 1].y()));
        return perimeter;
    }

    // Возвращает количество вершин многоугольника
    unsigned int size() const{
        return points.size();
    }

    // Возвращает N-ую вершину многоугольника
    // (вершины нумеруются начиная с нуля в том же порядке, в котором были переданы)
    Point2D vertex(unsigned int N) const{
        return points[N];
    }
private:
    std::vector<Point2D> points;
};


using namespace std;

int main()
{
    std::vector<Point2D> points = {{-1.0, -1.0}, {-1.0, 1.0}, {1.0, 1.0}, {1.0, -1.0}};
    Polygon p(points);
    cout << "Points:" << endl;
    for(unsigned int i = 0; i < p.size(); i++) {
        cout << p.vertex(i).x() << " " << p.vertex(i).y() << endl;
    }
    cout << "Perimeter: " << p.perimeter() << endl;
    return 0;
}