#include<iostream>
int main() {
    int x, pol[1000], otr[1000], sum_pol = 0, sum_otr = 0, n;
    std::cin >> n;
    for(int m=0;m<n;m++) {
        std::cin >> x;
        if (x >= 0) {
            pol[sum_pol] = x;
            sum_pol++;
        }
        if (x<0){
            otr[sum_otr] = x;
            sum_otr++;
        }
    }
    for (int i = 0; i<sum_pol-1;i++) {
        for (int j = sum_pol - 1; j > i; j--) {
            if (pol[j-1] <= pol[j]) std::swap(pol[j-1], pol[j]);
            }
        }
    for (int i = 0; i <= sum_otr-1; i++) {
        for (int j = sum_otr - 1; j > i; j--) {
            if (otr[j-1] > otr[j]) std::swap(otr[j], otr[j - 1]);
            }
        }
    for(int i=sum_pol-1;i>=0;i--){
        std::cout << pol[i] << " ";
    }
    for(int i=sum_otr-1;i>=0;i--){
        std::cout << otr[i] << " ";
    }
}
