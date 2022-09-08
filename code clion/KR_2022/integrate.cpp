#include <iostream>
#include<cmath>
#include <iomanip>
struct vector_2d {
    double x;
    float y;
    vector_2d operator+(vector_2d const &v) { return {x + v.x, y + v.y}; }

    vector_2d operator/(double v) {
        return {x / v, y / static_cast<float>(v)};
    }

    vector_2d operator*(double v) {
        return {x * v, y * static_cast<float>(v)};
    }


    vector_2d &operator+=(vector_2d const &v) {
        x += v.x;
        y += v.y;
        return *this;
    }
};
vector_2d operator/(double a, vector_2d& v){
    return {v.x / a, v.y / static_cast<float>(a)};
}
struct precision_func {
    vector_2d operator()(double x) {
        return {std::sin(x), std::sinh(static_cast<float>(x))};
    }
};
template<typename range_type>
class  function{
    range_type operator() (range_type x) {return x;}

};
//size_t operator*(size_t  x, int a){
// return (x * a);
//}

template <typename output_type, typename range_type, typename function>
output_type integrate(range_type min, range_type max, size_t NPoints, function f){
    output_type a{};
    for(size_t i = 0; i < NPoints; i++){
        a += (f(min + (max - min)/ NPoints * i) + f(min + (max - min)/ NPoints * (i + 1)))/ 2;
    }
    return a * (max - min)/NPoints;
}

int main() {
    auto const pi = 4.0 * std::atan(1);
    auto result = integrate<vector_2d>(0.0, pi, 2000, precision_func());
    std::cout << "sin: " << std::setprecision(6) << result.x << std::endl
              << "sinh:  " << std::setprecision(6) << result.y << std::endl;
}
