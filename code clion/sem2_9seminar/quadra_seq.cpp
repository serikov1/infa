#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(){
    std::vector<int> sequence (10);
    std::iota(std::begin(sequence), std::end(sequence), 1);
    std::transform(std::begin(sequence), std::end(sequence), std::begin(sequence),[](auto elem){return elem*elem;});
    for(auto i: sequence){
        std::cout<<i<<" ";
    }
}

