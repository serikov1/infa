#include <iostream>
int main() {
    int n, m, a[100][100], max = 0, st=0;
    std::cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[j][i];
        }
        if (sum > max) {
            max = sum;
            st = i;
        }
        
            
    }
    std::cout << st;
}