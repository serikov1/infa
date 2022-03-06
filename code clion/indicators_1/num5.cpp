
int* copyarr(int* a, unsigned int size){
    int *b = new int [size];
    for (int i=0; i< size; i++){
        b[i]=a[i];
    }
    return(b);
}