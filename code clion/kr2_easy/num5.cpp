struct Employee {
    char name[N_STR];
    char surname[N_STR];
    unsigned int n_implants;
    char implant_type[N_IMPLANTS]; // 'p' - personal, 'c' - corporate, 'u' - unidentified, 'i' - illegal
    bool implant_on[N_IMPLANTS];
    char id[N_STR];
    unsigned int department;
};

void dismissal(Employee* e){
    for(int i=0; i< e->n_implants; i++){
        if(e->implant_type[i]=='c') e->implant_on[i]=false;
    }
}