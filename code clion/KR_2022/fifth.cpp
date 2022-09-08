#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>

int main(){
    double x_0, y_0, z_0, r;
    int N;
    std::cin>>x_0>>y_0>>z_0>>r;
    std::cin>>N;
    int t;
    double x, y, z;
    std::string uuid;
    std::map<int, std::map<std::string, std::vector<double>>> data;
    for(int i = 0; i < N; i++){
        std::cin>>uuid;
        std::cin>>t;
        std::cin>>x>>y>>z;
        data[t][uuid].push_back(x);
        data[t][uuid].push_back(y);
        data[t][uuid].push_back(z);
    }
//    for(auto& elem: data){
//        std::cout<<elem.first<<std::endl;
//    }
    std::map<std::string, int> to_print;
    for(auto& elem: data){
        double R;
        for(auto map: elem.second){
            R = sqrt(std::pow(map.second[0] - x_0, 2) + std::pow(map.second[1] - y_0, 2) + std::pow(map.second[2] - z_0, 2));
//            std::cout<<map.second[0] <<" " <<map.second[1]<<" "<<map.second[2] - z_0<<std::endl;
//            std::cout<<R<<std::endl;
            if(R < r){
                to_print[map.first]++;
//                int i = 0;
//                for(auto& name: to_print){
//                    if(name.first != map.first){
//                        i++;
//                    }
//                    if(i == to_print.size()){
//                        to_print.insert(name);
//                    }
//                }
            }
            if(to_print[map.first] == 1) std::cout<<map.first<<std::endl;
        }
    }
}