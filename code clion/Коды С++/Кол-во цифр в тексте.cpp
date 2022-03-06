#include <iostream>
using namespace std;
bool is_a_number(char c)
{if (!(c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9'))
        return false;
    else
    return true;
} 
int main()
{
    char c;
    unsigned int sum = 0;
    do
    {
        cin >>c;
        if (is_a_number(c))
            sum += 1;
    } while (c != '@');
    cout <<sum <<endl;
    return 0;
}

