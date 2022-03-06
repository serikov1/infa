#include<iostream>
#include<cmath>
#include<vector>

struct Vector{
    double x;
    double y;
    double z;
};
double Vector_abs(Vector vec){
    return sqrt(vec.x*vec.x + vec.y*vec.y + vec.z*vec.z);
}

int main(){
    int n;
    std::vector<Vector> cat_coordinates;
    std::cin>>n;
    cat_coordinates.resize(n);
    for(int i=0; i<n; i++) {
        std::cin >> cat_coordinates[i].x >> cat_coordinates[i].y >> cat_coordinates[i].z;
    }
    double norm;
    double result=0.;
    std::cin>>norm;
    for(int i=0; i<n;i++){
        result+=Vector_abs(cat_coordinates[i]);
        std::cout<<result<<std::endl;
        if(result>=norm) {
            std::cout<<i;
            break;
        }
    }
if(result<norm) std::cout<<-1;
}