#include <iostream>
#include <cmath>
#include<iomanip>

int main(){
    double k, h, m;
    std::cin>>k>>h>>m;
    double F;
    F=h*k;
    double a;
    a=F/m;
    double v;
    v=sqrt(2*a*h);
    std::cout<<std::fixed<<std::setprecision(1)<<v;
}