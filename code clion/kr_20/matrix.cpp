#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin>>n;
    std::vector<std::vector<int>> matrix;
    matrix.resize(n);
    for(int i=0;i<n;i++){
        matrix[i].resize(n);
        for(int j=0;j<n;j++){
            std::cin>>matrix[i][j];
        }
    }
    int k=n-1, sum=0;
    for(int i=0;i<n;i++){
       sum+= matrix[i][k];
       k-=1;
    }
    std::cout<<sum;
}