
int** transpose(int** matrix, unsigned int N, unsigned int M){
    int **transponsed = new int*[M];
    for(auto i=0u;i<M;i++) transponsed[i]=new int[N];
    for(int i=0; i<N;i++){
        for(int j=0;j<M;j++) transponsed[j][i]=matrix[i][j];
    }
    return transponsed;
}