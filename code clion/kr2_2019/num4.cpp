struct Animal {
    unsigned int type_id;    // код породы
    char name[100];          // имя
    struct Animal* next;     // указатель на следующее животное
    struct Event* history;   // история событий
};


struct Animal* merge(struct Animal* list_one, struct Animal* list_two){
    for(auto current = list_one; current->next; current= current->next ){
        if(!(current->next)) current->next= list_two;
    }
    return list_one;
}