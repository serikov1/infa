#include <iostream>

int main() {
    int mon10=0, mon5=0, mon1=0, n, m, k;
    std::cin>>n;
    if(n>9){
        while(n>=10) {
            n -= 10;
            m = n;
            mon10++;
        }
        if(m>4){
            while(m>=5){
                m-=5;
                k=m;
                mon5++;
            }
            if(k>0){
                while(k>0){
                    k--;
                    mon1++;
                }
            }
        }
        else{
            if(n>0){
                while(n>0){
                    n--;
                    mon1++;
                }
            }
        }
    }
    else {
        if (n > 4) {
            while (n >= 5) {
                n -= 5;
                k = n;
                mon5++;
            }
            if (k > 0) {
                while (k > 0) {
                    k--;
                    mon1++;
                }
            }
        }
        else {
            if(n>0){
                while(n>0){
                    n--;
                    mon1++;
                }
            }
        }

    }
    std::cout<<mon10<<" "<<mon5<<" "<<mon1;
}
