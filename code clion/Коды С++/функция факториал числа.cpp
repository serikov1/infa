#include <iostream>
using namespace std;
unsigned long long int factorial(unsigned int n) {
    unsigned long long int y = n;
    for (unsigned long long int i = 0; i < n; i++) {
        while (n > 1) {
            unsigned long long int x = n - 1;

            y = y * x;
            n = n - 1;
            
        }

    }return y;
    
    
}

unsigned int sum_of_numbers(unsigned long long int n)
{
    unsigned int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    unsigned int n;
    cin >>n;
    cout <<sum_of_numbers(factorial(n)) <<endl;
    return 0;
}
