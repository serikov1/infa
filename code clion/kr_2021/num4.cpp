#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;


void separate_rgba(unsigned int *data, unsigned int n){
    int counter=1;
    std::vector<int> help(4*n);
    help[0]=data[0];
    for(int i=1; i<n; i++){
        help[i]=data[4*i];
        counter++;
    }
    int counter1=counter;
    for(int i=0; i<n; i++){
        help[counter1+i]=data[1+4*i];
        counter++;
    }
    int counter2=counter;
    for(int i=0; i<n; i++){
        help[counter2+i]=data[2+4*i];
        counter++;
    }
    int counter3=counter;
    for(int i=0; i<n; i++){
        help[counter3+i]=data[3+4*i];
        counter++;
    }
    for(int i=0; i<4*n;i++){
        data[i]=help[i];
    }
}


int main()
{
    unsigned int n;
    cin >> n;
    unsigned int* data = new unsigned int[4*n];
    for (unsigned int i = 0; i < 4*n; i++)
        cin >> data[i];
    separate_rgba(data, n);
    for (unsigned int i = 0; i < 4*n; i++)
        cout << data[i] << " ";
    cout << endl;
    delete[] data;
    return 0;
}


