#include<iostream>
#include<vector>

int main() {
    int n;
    int x, y, sum=0;
    std::cin >> x >> y >> n;
    std::vector<std::vector<char>> field(y);
    for (int i = 0; i < y; i++) {
        field[i].resize(x);
        for (int j = 0; j < x; j++) {
            field[i][j] = '0';
        }
    }
    for (int i = 0; i < n; i++) {
        int coor1, coor2, diametr;
        std::cin >> coor1 >> coor2 >> diametr;
        if (diametr == 0) {
            field[coor2][coor1] = '1';
        }
        if (diametr > 0) {
            for (int k = -diametr; k <= diametr; k++) {
                for (int m = -diametr; m <= diametr; m++) {
                    if (x > coor2 + m && 0 <= coor2 + m && y > coor1 + k && 0 <= coor1 + k) {
                        field[coor2 + m][coor1 + k] = '1';
                    }

                }
            }
        }
        if(diametr>x or diametr>y){
            for (int l = 0; l < y; l++) {
                for (int h = 0; h < x; h++) {
                    field[l][h] = '1';
                }
            }

        }
    }

//    for (int i = 0; i < y; i++) {
//        for (int j = 0; j < x; j++) {
//            std::cout << field[i][j];
//        }
//        std::cout << std::endl;
//    }
    for(int i=0; i<y;i++){
        for(int j=0; j<x; j++){
            if(field[i][j]=='0') sum++;
        }
    }
    std::cout<<sum;
}