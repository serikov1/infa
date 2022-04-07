#include<iostream>
#include<algorithm>

int main(){
    int n;
    int num;
    std::vector<int> nums;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>num;
        nums.push_back(num);
    }
    std::reverse(std::begin(nums), std::end(nums));
    for(auto elem: nums) std::cout<<elem<<" ";
}
