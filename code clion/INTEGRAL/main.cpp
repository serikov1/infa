#include <iostream>
#include <vector>
#include <map>
#include <cmath>

//template <typename output_type, typename range_type, typename function>
//output_type integrate(range_type min, range_type max, size_t NPoints, function f){
//
//}
class polynom{
public:
    polynom() = default;
    explicit polynom(std::vector<int> mass): mass(mass){
        for(int i = 0; i < mass.size(); i++){
            poly[i] = mass[i];
        }
    }

   polynom  operator+(polynom& x){
       polynom res;
      for(int i = 0; i < std::max(this->poly.size(), x.poly.size()); i++){
          res.poly[i] = x.poly[i] + poly[i];
      }
      return res;
   }
   double operator()(double value){
       for(int i = 0; i < poly.size(); i ++){
           sum += poly[i] * int(std::pow(value, i));
       }
       return sum;
   }
   double getsum(){
        return sum;
    }

private:
    std::map<int, int> poly;
    std::vector<int> mass;
    double sum = 0;
};

double integrate(double min, double max, int NPoints, polynom f){
    double S = 0;
//    std::cout<<f.getsum()<<std::endl;
    for(double i = min; i < max;){
        S += (max - min) / NPoints * (f(i) + f(i + 1)) / 2;
        i += (max - min) / NPoints;
        std::cout<<f(1)<< std::endl;
//        std::cout<<f(100)<< std::endl;
    }
    std::cout<<S<<std::endl;
    return S;
}

int main(){
    std::vector<int> mass = {1};

    polynom f(mass);
//    std::cout<<integrate(0, 5, 10, f);
    std::cout<<f(0)<<" "<< f(0);
}