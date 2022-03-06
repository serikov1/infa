#include "iostream"

bool do_some_work(int* a, int* b){
    if(*a>*b) return true;
    else return false;
}

int main(){
    int a, b;
    std::cin>>a>>b;
    if (do_some_work(&a,&b)) std::cout<<a-b;
    else std::cout<<b+a;
}