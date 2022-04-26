#include<iostream>
#include<map>
#include<set>
#include <vector>

std::string different_to_lowercase(std::string& a){
    std::string b = a;
    for(char& elem: b){
        if(elem < 97) elem += 32;
    }
    return b;
}

int main(){
int N;
std::string word;
std::cin>>N;
std::map<std::string, std::set<std::string>> word_in_variants;
std::map<unsigned int, std::set<std::string>> size_in_words;
for(int i = 0; i < N; i++){
    std::cin>>word;
    word_in_variants[different_to_lowercase(word)].insert(word);
}
for(auto& elem: word_in_variants){
    size_in_words[elem.second.size()].insert(elem.first);
}
for(auto i = size_in_words.rbegin(); i != size_in_words.rend(); i++) {
    if (i->first > 2) {
        for (auto &phrase: i->second) {
            std::cout << phrase << std::endl;
        }
    }
}
}
