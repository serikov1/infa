#include<iostream>
#include<list>

int main(){
    std::list<int> list_1{1, 2, 3, 4, 5};
    std::list<int> list_2{5, 6, 7, 8, 9};
    list_1.splice(std::begin(list_1), list_1, std::begin(list_2), std::end(list_2));
    for(auto i: list_1){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    for(auto i: list_2){
        std::cout<<i<<" ";
    }
}