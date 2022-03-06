#include <iostream>
int main() {
    int n, m;
    std::cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 or i==n-1 or j==0 or j==m-1)
                std::cout<<"*";
                else
                std::cout<<" ";
        }
        std::cout<<'\n';
    }
}
