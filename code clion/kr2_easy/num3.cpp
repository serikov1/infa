#include<iostream>
#include<vector>

int main(){
    int x, y, k;
    std::cin>>x>>y>>k;
    std::vector<std::vector<char>> field(y);
    for(int i=0; i<y;i++){
        field[i].resize(x);
        for(int j=0; j<x; j++){
            field[i][j]='*';
        }
    }
    for(int i=0; i<k;i++){
            int coor1, coor2;
            std::cin>>coor1>>coor2;
            field[coor2][coor1]='T';
    }
    for(int i=0; i<y;i++){
        for(int j=0; j<x; j++){
            std::cout<<field[i][j];
        }
        std::cout<<std::endl;
    }
}