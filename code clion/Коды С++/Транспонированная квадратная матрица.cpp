#include<iostream>
using namespace std;
int main() {
    int str, stb;
    int a[10][10], n;
    cin >> n;
    for (str = 0; str < n; str++) {
        for (stb = 0; stb < n; stb++) {
            cin >> a[str][stb];

        }


    }
    for (int stb = 0; stb < n; stb++) {
        for (int str = 0; str < n; str++) {
            cout << a[str][stb]<<" ";
           
        }
        cout << '\n';
    }
}