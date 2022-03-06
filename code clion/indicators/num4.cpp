#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sum(int n, int* array)
{
    int m=0;
    for(int i=0;i<n;i++){
        m+=array[i];
    }
    return(m);
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    cout << sum(10, a) << endl;
    return 0;
}

