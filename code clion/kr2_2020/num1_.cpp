#include <iostream>
#include <vector>
#include <iomanip>

int main(){
    std::vector<float> numbers;
    long long int n;
    double sum=0;
    std::cin>>n;
    numbers.resize(n);
    for(int i=0; i<n ;i++){
        float num;
        std::cin>>num;
        numbers[i]=num;
        sum+=num;
    }
    double average=sum/n;
    for(int j=0;j<n;j++){
        std:: cout<< std::fixed<<std::setprecision(4)<<numbers[j]-average<<" ";
    }

}