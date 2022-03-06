#include<iostream>
int main(){
    int x, y,n, a[100][2],s=0;

    std::cin>>x>>y;
    std::cin>>n;
    if(n==0 and x>y) {

        std::cout << x-y;
    }
    else {
        if(n==0 and y>x) {
        std::cout << y-x;
    }
        else{
    for(int i=0; i<n;i++){
        for(int j=0; j<2;j++)
        std::cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
        x=a[i][0]+x;
        y=a[i][1]+y;
        if((x<0 and y>0 )or (x>0 and y<0) and abs(y)+abs(x)>s)
        s=abs(y)+abs(x);
        if(x>0 and y>0) {
            if(y>x and  y-x>s)
            s = y - x;
            if(x>y and x-y>s)
                s = y - x;
        }
    }
std::cout<<s;
}
}
}