#include <iostream>
#include <vector>

int main() {
    std::vector<int> array;
    int n, i;
    std::cin >> n;
    array.resize(n);
    for ( i = 0u; i < n; i++) {
        int numbers;
        std::cin >> numbers;
        array[i] = numbers;
    }
    int m, j;
    std::cin >> m;
    for (int a = 0; a < m; a++)
    {
        for (j=0; j<n; j--)
        {
            if (array[j] >= array[j - 1]) std::swap(array[j - 1], array[j]);
        }
    }
    for(j=0;j<m;j++){
        for(i=n-1;i>=0;i--){
            if(array[j]!=array[i]) std::swap(array[j], array[j+1]);
        }
        std::cout<<array[j]<<" ";
    }
}