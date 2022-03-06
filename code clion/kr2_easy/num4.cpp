struct Vehicle {
    unsigned int id;
    char name[20];
    bool is_visible;
    int type; 		// 0 - car, 1 - bike, 2 - horse, 3 - human
    float x, y, z; 		// coordinates
    float vx, vy, vz;	// velocity
};

unsigned int how_many_invisible_bikes(Vehicle* v, unsigned int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if(!v[i].is_visible && v[i].type==1)
            sum++;
    }
    return sum;
}