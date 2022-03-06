#include <iostream>

int main() {
    float X,Y,V,W,t;
    std::cin>>X>>Y>>V>>W;
    if(X/V<Y/(V-W))
        std::cout<<"0";
    else
        std::cout<<X-V*(Y/(abs(W-V)));
}
