#include<iostream>
#include<set>
#include<map>
#include<algorithm>

int main(){
    int n, elem;
    std::set<int> sequence;
    std::map<int, int> num_in_quantity;
    std::cin>>n;
    for(int i = 0; i < n; i++) {
        std::cin >> elem;
        num_in_quantity[elem]++;
    }
    for(auto pair: num_in_quantity){
        if(pair.second == 1) sequence.insert(pair.first);
    }
    std::cout<<* std::prev(sequence.end());
}