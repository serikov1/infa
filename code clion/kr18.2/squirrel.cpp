#include<iostream>
#include<vector>
#include<cmath>
#include <iomanip>

int main(){
    std::vector<double> squirrel(2);
    for(auto&  elem: squirrel)
        std::cin>> elem;
    double L= (squirrel[1]* sqrt(2*squirrel[0]))/ sqrt(9.81);
    std::cout <<std::fixed<< std::setprecision(4)<<L;
}

