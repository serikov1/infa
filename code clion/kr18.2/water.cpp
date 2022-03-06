#include<iostream>
#include<vector>
#include <cmath>
#include <iomanip>

int main(){
    int n;
    std::cin>>n;
    std::vector<float> drops(n);
    float S=0;
    for(auto& elem: drops) {
        std::cin >> elem;
        float s= elem * elem;
         S+=s;
    }
    float r=sqrt(S);
    std::cout<<std::fixed<<std::setprecision(4)<<r;
}