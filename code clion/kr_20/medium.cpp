#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> numbers(n);
    for(auto& elem: numbers)
        std::cin>>elem;
    int search=n/2;
    for(int i=0;i<n;i++) {
        if (i % 2 == 0) search += i;
        else search += -i;
        std::cout<<numbers[search]<<" ";
    }
}