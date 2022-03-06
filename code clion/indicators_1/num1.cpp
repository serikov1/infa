#include<iostream>

//int bin( int &x){
//    int sum=0;
//    int b=x;
//    for(int i=0;i<32;i++){
//        x=x<<i;
//        x=x>>31;
//        if(x==1) sum++;
//        std::cout<<x<<std::endl;
//        x=b;
//
//    }
//    return(sum);
//}

int main(){
    int n, i, k;
    std::cin>> n;
    n *= 1024*1024;

    i = 2; k = 1;
    while(n > i){
        i *= 2;
        k++;
    }
    if(k%8 != 0)
        k += 8;
    k = k/8;
    std::cout<< k;
    return 0;
}