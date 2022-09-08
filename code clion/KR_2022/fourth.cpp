#include<iostream>
#include<set>
#include<algorithm>
#include<map>

int main(){
    int N;
    std::string num;
    std::cin>>N;
    std::map<std::string, int> nums;
    for(int i = 0; i < N; i++){
        std::cin>>num;
        nums[num]++;
    }
    std::map<int, std::string> reverse;
    for(auto elem: nums){
       reverse[elem.second] = elem.first;
    }
//    for(auto elem: nums){
//        std::cout<<elem.first<<" "<<elem.second<<std::endl;
//    }
//    std::cout<<std::endl;
//    for(auto elem: reverse){
//        std::cout<<elem.first<<" "<<elem.second<<std::endl;
//    }
    std::cout<<std::prev(reverse.end())->second;

}
