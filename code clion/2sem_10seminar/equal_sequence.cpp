#include<iostream>
#include<algorithm>
#include<set>

int main(){
    int n;
    int num;
    std::multiset<int> nums_1;
    std::multiset<int> nums_2;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>num;
        nums_1.insert(num);
    }
    for(int i = 0; i < n; i++){
        std::cin>>num;
        nums_2.insert(num);
    }
    std::cout<<std::boolalpha<<std::equal(std::begin(nums_1), std::end(nums_1), std::begin(nums_2));
}
