#include <iostream>
#include <cmath>
int main(){
    float a, v, r, t1, t2;
    std::cin>>a>>v>>r;
    t1=sqrt(2*r/a);
    t2=r/v;
    if(t1>t2) std::cout<<2;
    else std::cout<<1;
    return 0;
}

