#include<iostream>
#include<vector>

int mult(int n, int j, int matrix){
    for(int k=0;k<n;k++){
      for(int m=0;m<n;m++){
          matrix=d[j][m]*p[]
      }
    }
}
int main(){
    int n;
    std::cin>>n;
    std::vector<std::vector<int>> d_matrix;
    d_matrix.resize(2*n);
    for(int i=0;i<2*n;i++){
        d_matrix[i].resize(n);
        for(int j=0;j<n;j++){
            std::cin>>d_matrix[i][j];
        }
    }
    std::vector<std::vector<int>> b_matrix;
    b_matrix.resize(n);

    for(int k=0;k<n;k++){
        d_matrix[k].resize(n);
            for(int m=0;m<n;m++){
                int fun=d_matrix[i][j]*d_matrix[n+j][i];
                b_matrix[k][m]+=fun;
                std::cout<<b_matrix[k][m]<<" ";
        }
        std::cout<<"\n";
    }
}
