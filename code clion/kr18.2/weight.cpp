#include <iostream>
#include <vector>
#include<algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<float>> points;
    points.resize(n);
    for (int i = 0; i < n; i++) {
        points[i].resize(2);
        for (int j = 0; j < 2; j++) {
            std::cin >> points[i][j];
//            std::cout << points[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (points[j][0] < points[j+ 1][0]) std::swap(points[j + 1][0], points[j][0]);
//            std::cout << points[j][0];
        }
        std::cout << points[i][1];
    }
//    for(int i=0;i<n;i++)

//    int m=0.0;
//    for (int i = 0; i < 5; i++) {
//        m=points[i][0];
//        std::cout<<m;
//    }
//    std::cout<<M;
}