#include <iostream>

int main() {
   float array[1000][3], volume[1000];
   int n,  k=1, max=0;
   std::cin>>n;
   for(int i=0;i<n;i++){
       for(int j=0;j<3;j++){
           std::cin>>array[i][j];
       }
   }
   for(int i=0;i<n;i++) {
       volume[i] = array[i][0] * array[i][0] * array[i][1] * array[i][2];
       if ( volume[i]>max) {
           max=volume[i];
            k=i;
       }
   }

   std::cout<<k;
}
