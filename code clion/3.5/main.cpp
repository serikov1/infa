#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> array;
    array.resize(n);
    for(int i=0;i<n;i++){
        int numbers;
        std::cin>>numbers;
        array[i]=numbers;
    }
    int m, j;
    std::cin>>m;
    for (int i=0;i<m;i++){
        for(j=n-1;j>i;j--){
            if(array[j]>=array[j-1]) std::swap(array[j],array[j-1]);
        }
    }
    for(j=0;j<=m-1;j++){
        std::cout<<array[j]<<" ";
    }
}