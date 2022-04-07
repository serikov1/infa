#include<iostream>
#include<map>
#include <algorithm>

void nums(char elem, std::map<char, int>& dict){
    if(!std::isspace(static_cast<unsigned char>(elem)))
        dict[elem]++;
}

int main(){
    std::string word("sequences");
    std::map<char, int> dict;
    std::for_each(std::begin(word), std::end(word), [&dict](auto elem){if(!std::isspace(static_cast<unsigned char>(elem)))
        dict[elem]++;});
    for(auto elem: dict){
        std::cout<<elem.first<<" in "<<word<<" repeated "<<elem.second<<" times"<<std::endl;
    }
}

