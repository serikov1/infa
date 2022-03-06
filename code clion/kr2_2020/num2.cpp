#include<iostream>
#include<string>

int main(){
    std::string number;
    int sum=0;
    std::cin>>number;
    for(int i=0;i<number.size();i++){
        int digit_in_int = number[i] - '0';
        sum+=(i%2==0) ? digit_in_int : -digit_in_int;
    }
    std::cout<<((sum%11==0) ? "YES" : "NO");
}

