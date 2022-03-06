#include<iostream>
using namespace std;
int main() {
    int str, stb;
    int a[10][10], n, m;
    cin >> n;
    cin >> m;
    for (str = 0; str < n; str++) {
        for (stb = 0; stb < m; stb++) {
            cin >> a[str][stb];

        }


    }
    for (int str = 0; str< m; str++) {
        for (int stb = 0; stb < n; stb++) {
            cout << a[stb][str] << " ";

        }
        cout << '\n';
    }
}
