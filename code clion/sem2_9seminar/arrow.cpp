#include<iostream>
#include<vector>

void arrow(unsigned n){
    for(int i = 0u; i <= n; i++){
        for(int j = 0u; j < i; j++) std::cout<<"*";
        std::cout<<std::endl;
    }
    for(unsigned i = n - 1; i > 0; i--) {
        for (int j = 0u; j < i; j++) std::cout << "*";
        std::cout << std::endl;
    }
}

int main(){
    arrow(5);
}

