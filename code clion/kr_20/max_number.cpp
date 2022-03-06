#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> numbers(n);
    for(int& elem: numbers)
        std::cin>>elem;
    int max=-1000, sum=0;
    for(int i=0; i<n; i++){
        if (numbers[i]>max)
            max=numbers[i];
    }
    for(int i=0; i<n; i++){
        if(max==numbers[i])
            sum+=1;
    }
    std::cout<<sum;
}