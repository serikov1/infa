#include <iostream>

int main() {
    int a, b;
    std::cin>>a>>b;
    for(int i=0;i<b;i++){
        std::cout<<"|";
    }
    for(int i=0;i<a;i++){
        std::cout<<"=";
    }
    for(int i=0;i<b;i++){
        std::cout<<"|";
    }
}
