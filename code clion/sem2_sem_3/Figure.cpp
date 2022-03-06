#include <iostream>
#include <cmath>
#include <vector>

class Figure
{
public:
    virtual double square() = 0;
    virtual double perimeter() = 0;
};

class Ellipse:public Figure
{
public:
    Ellipse(double a, double b): _a(a), _b(b){}

    double square() override
    {
        return acos(-1) * _a * _b;
    }

    double perimeter() override
    {
        return 4 * (acos(-1) * _a * _b + pow((_a - _b), 2))/(_a + _b);
    }
//  friend std::ostream& operator<<(std::ostream&, Ellipse);
private:
    double  _a, _b; // большая и малая полуоси
};

//std::ostream& operator<<(std::ostream& out, Ellipse ellipse)
//{
//    return out << "square is " <<ellipse.square()<<std::endl<< "perimeter is " <<ellipse.perimeter();
//}

class Circle: public Ellipse
{
public:
    explicit Circle(double r): Ellipse(r, r){}
};

class Triangle: public Figure
{
public:
    Triangle(double  a, double  b, double  c): a(a), b(b), c(c){}

    double square() override
    {
        double p = (a + b + c)/2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    double perimeter() override
    {
        return a + b + c;
    }
//    friend std::ostream& operator<<(std::ostream&, Triangle);
private:
    double  a, b, c;
};
//std::ostream& operator<<(std::ostream& out, Triangle triangle){
//  return out << "square is " <<triangle.square()<<std::endl<< "perimeter is "<<triangle.perimeter();
//}



class Quadrilateral: public Figure
{
public:
    Quadrilateral(double  a, double  b, double  c, double  d): _a(a), _b(b), _c(c), _d(d){}

    double square() override
    {
        return (_a * _c * 0.5) + (_b * _d * 0.5);
    }

    double perimeter() override
    {
        return _a + _b + _c + _d;
    }
//    friend std::ostream& operator<<(std::ostream&, Quadrilateral);
private:
    double  _a, _b, _c, _d;
};

//std::ostream& operator<<(std::ostream& out, Quadrilateral quadrilateral){
//   return out <<"square is " <<quadrilateral.square()<<std::endl<< "perimeter is " <<quadrilateral.perimeter();
//}

class Rectangle: public Quadrilateral
{
public:
    Rectangle(double  a, double b): Quadrilateral(a, b, a, b){}
};

class Square: public Rectangle
{
public:
    explicit Square(double a): Rectangle(a, a){}
};

int main(){
    std::vector<Figure*> figures;

    Ellipse ellipse(10, 5);
    figures.push_back(&ellipse);

    Circle circle(7);
    figures.push_back(&circle);

    Triangle triangle(3, 4, 5);
    figures.push_back(&triangle);

    Quadrilateral quadrilateral(2, 7, 9, 12);
    figures.push_back(&quadrilateral);

    Rectangle rectangle(4, 10);
    figures.push_back(&rectangle);

    Square square(15);
    figures.push_back(&square);

    for(auto fig: figures){
        std::cout<<"square is: "<< fig->square()<<", "<<"perimeter is: "<<fig->perimeter()<<std::endl;
    }
}