#include<iostream>
#include<set>
#include<algorithm>

int main(){
    int n;
    int num;
    std::multiset<int> nums_1;
    std::multiset<int> nums_2;
    std::set<int> intersec;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>num;
        nums_1.insert(num);
    }
    for(int i = 0; i < n; i++){
        std::cin>>num;
        nums_2.insert(num);
    }
    std::set_intersection(std::begin(nums_1), std::end(nums_1), std::begin(nums_2), std::end(nums_2), std::begin(intersec));

    for(auto& elem: intersec) std::cout<<elem<<" ";

}

