#include <iostream>
using namespace std;
int main() {
    long int m, n, l, i = 1, nod2 = 0, nok2 = 0, nod3 = 0, nok3 = 0;
    cin >> m >> n >>l;
    for (i; i <= m; i++) {
        if (m % i == 0 and n % i == 0)
            nod2 = i;
    }

    nok2 = m * n / nod2;
    int g = 1;
    for (g; g <= l; g++) {
        if (l % g == 0 && nok2 % g == 0)
            nod3 = g;
    }
    nok3 = nok2 * l / nod3;
    cout << nok3;
    return 0;
}