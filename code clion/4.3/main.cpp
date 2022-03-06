#include <iostream>

int search_rec(int x, int* array, int n) {
    for (int i = 0; i < n; i++) {
       if (array[i] == x)
            return i;
       else continue;
    }
    if (array[n-1]!=x)
        return -1;
}
int main()
{
    int n, a[100], x;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std:: cin >> a[i];
    for (int i = 0; i < 5; i++)
    {
        std:: cin >> x;
        std:: cout << search_rec(x, a, n) << " ";
    }
    std::cout << std::endl;
    return 0;
}