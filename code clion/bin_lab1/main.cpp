#include<iostream>
using namespace std;
int main()
{
    unsigned int  a, b=0;
    cin>>a;
    b=a;
    for(int i=0;i<32;i++){
        a=a<<i;
        a=a>>31;
        cout<<a<<" ";
        a=b;
    }
}