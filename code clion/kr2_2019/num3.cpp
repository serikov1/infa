#include <iostream>
using namespace std;

struct Coon {
    unsigned int id;
    char name[100];
    double weight;
    double food;
};

Coon* find_the_most_fed_cat(Coon* atc, unsigned int n_cats){
    Coon* num=atc;
    for(int i=1; i<n_cats; i++){
            if((atc[i].food/atc[i].weight) >= (num->food / num->weight)) num = atc+i;
    }
    return num;
}

int main()
{
    Coon all_the_coons[1000];
    unsigned int n;
    cin >>n;
    for (unsigned int i = 0; i < n; i++) {
        cin >>all_the_coons[i].id >>all_the_coons[i].name >>all_the_coons[i].weight >>all_the_coons[i].food;
    }
    cout <<find_the_most_fed_cat(all_the_coons, n)->name <<endl;
    return 0;
}

