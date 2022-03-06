#include<iostream>
#include<vector>
#include<cmath>

struct way{
    double T;
    double x;
    double y;
    double s;
};
int main() {
    int n;
    double S=0.;
    std::vector<way> sum_way;
//    auto S = 0u;
    std::cin >> n;
    sum_way.resize(n);
    for (int i = 0; i < n; i++) {
        std::cin >> sum_way[i].T >> sum_way[i].x >> sum_way[i].y;
    }
    for(int i=1;i<n; i++){
        sum_way[i].s = sqrt((sum_way[i].x -  sum_way[i - 1].x) * (sum_way[i].x -  sum_way[i - 1].x) + (sum_way[i].y -  sum_way[i - 1].y) * (sum_way[i].y -  sum_way[i - 1].y));
        if ( sum_way[i].s / ( sum_way[i].T -  sum_way[i - 1].T) < 330.0) {
            S +=  sum_way[i].s;
        } else continue;
    }
    std::cout<<S;

    }

//    for (int i = 1; i < n; i++) {
//        if (  ((sqrt(sum_way[i].x * sum_way[i].x + sum_way[i].y * sum_way[i].y)) -
//                (sqrt(sum_way[i - 1].x * sum_way[i - 1].x + sum_way[i - 1].y * sum_way[i - 1].y)) /
//            (sum_way[i].T - sum_way[i - 1].T )< 330.0  )) {
//            S += abs(sqrt(sum_way[i].x * sum_way[i].x + sum_way[i].y * sum_way[i].y) -
//                 sqrt(sum_way[i - 1].x * sum_way[i - 1].x + sum_way[i - 1].y * sum_way[i - 1].y));
//        }
//        else continue;
//    }


