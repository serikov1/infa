#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main(){
    int n;
    int num;
    std::vector<int> sequence;
    std::vector<int> even;
    std::vector<int> odd;
    std::cin>>n;
    for(auto i = 0; i < n; i++){
        std::cin>>num;
        sequence.push_back(num);
    }
    for(auto elem: sequence){
        if(elem % 2 == 0) even.push_back(elem);
        else odd.push_back(elem);
    }
    std::sort(std::rbegin(even), std::rend(even));
    std::sort(std::begin(odd), std::end(odd));
//    for(auto elem: odd){
//        std::cout<<elem<<" ";
//    }
//    std::cout<<std::endl;
//    for(auto elem: even){
//        std::cout<<elem<<" ";
//    }
    for(auto& elem: sequence) {
        if (elem % 2 == 0) {
            elem = even[0];
            even.erase(std::begin(even));
        }
    }
    for(auto& elem: sequence) {
        if ( elem % 2 != 0) {
            elem = odd[0];
            odd.erase(std::begin(odd));
        }
    }
    for(auto elem: sequence){
        std::cout<<elem<<" ";
    }
}
