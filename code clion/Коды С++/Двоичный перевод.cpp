#include <iostream>
using namespace std;

void binary(unsigned int n){ 
 int a[200], i=0; 
 for (i;n>0;n=(n-n%2)/2, i++){ 
 a[i]=n%2; 
 } 
 for (int k=i-1;k>=0;k--) { 
 std::cout<< a[k]; 
 } 
}
int main()
{
    unsigned int n;
    cin >>n;
    if (n==0)
    cout<<0;
    binary(n);
    for(int i=0;i<n;i++){
        
    }
    cout <<endl;
    return 0;
}