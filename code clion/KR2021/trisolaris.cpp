#include <iostream>
using std::cout;
using std::endl;
using std::cin;
unsigned int sum_ternary(unsigned int a){
    int c[200], i=0, sum=0;
    for (i;a>0;a=(a-a%3)/3, i++){
        c[i]=a%3;
    }
    for (int k=i-1;k>=0;k--) {
        sum+= c[k];
    }
    return sum;
}
int main()
{
    unsigned int n, s = 0, tmp;
    cin >> n;
    for (unsigned int i = 0; i < n; i++)
    {
        cin >> tmp;
        s += sum_ternary(tmp);
    }
    cout << sum_ternary(s) << endl;
    return 0;
}