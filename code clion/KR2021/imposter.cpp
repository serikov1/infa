#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int  n, check=0, difference[1000][10], f=0;
    std::cin>>n;
    std::vector<std::vector<int>> people;
    people.resize(n);

    for(int i=0; i<n; i++){
        people[i].resize(7);
        for (int j=0; j<7; j++){
            std::cin>>people[i][j];
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++)
        if(people[i][1]==people[j][1] and i!=j){
            check+=1;
            difference[f][0]=abs(people[i][5]-people[j][5]);
            difference[f][1]=people[i][1];
            f++;
        }
    }
    if(check==0) std::cout<<-1;
    else {
        for(int i=0;i<f;i++){
        for(int j=0; j<f; j++){
            if(difference[i][0]<difference[j][0]) std::swap(difference[i][1], difference[j][1]);

        }
    }
        std::cout<<difference[0][1];
}
}