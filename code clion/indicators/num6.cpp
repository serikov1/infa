#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void copy_array_reverse(int n, char* array_source, char* array_destination)
{
    for (int m=0;m<n;m++)
    {
        array_destination[m]=array_source[n-1-m];
    }
}

int main()
{
    char a[] = {"Hello there."};
    char b[] = {"General Kenobi..."};
    copy_array_reverse(6, a, b + 4);
    cout << b << endl;
    return 0;
}
