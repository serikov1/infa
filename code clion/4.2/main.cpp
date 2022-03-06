#include <iostream>

int main() {
    int array[1000], n, x = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    int i = -1;
    for (; i+2< n;) {
        if (array[i+1] <= array[i + 2]) {
            i += 1;
        }
        else {i+=2;}
        x += array[i];
    }
    std::cout<<x;
}
