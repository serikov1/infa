#include "iostream"
#include "vector"

void read_array(unsigned int** data, unsigned int* n){
    std::vector<unsigned> read_numbers;
    int temporary;
    for(;std::cin>>temporary;)read_numbers.push_back(temporary);
    *data = new unsigned [read_numbers.size()];
    for(auto i=0u;i<read_numbers.size();i++) (*data)[i]=read_numbers[i];
    *n=read_numbers.size();
}