#include <iostream>
using namespace std;
int main() {
    int a[1000], n;
    cin >> n;
    int i;
    float sum = 0.0;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sum /= n;
    for (i = 0; i < n; i++) {
        if (a[i] > sum)
            cout << a[i]<<" ";
    }

}
 

