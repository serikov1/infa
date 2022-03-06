#include<iostream>


int main(){
    int n_stat;
    std::cin>>n_stat;
    int pass=0;
    int in, out;
    for(int i=0; i<n_stat; i++){
        std::cin>>in;
        pass+=in;
        std::cin>>out;
        pass-=out;
    }
    std::cout<<pass;
}