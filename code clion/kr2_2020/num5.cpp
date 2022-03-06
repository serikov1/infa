
#include<iostream>

using namespace std;

// Struct to store list element
typedef struct list_element {
    int value;                  // Element value
    struct list_element* next;  // Pointer to next element
    struct list_element* prev;	// Pointer to previous element
} list_element;

// Create new element, set its value to 'i', return pointer to new element
list_element* create_list_element(int i)
{
    list_element* new_elem = new list_element;
    new_elem->value = i;
    new_elem->next = NULL;
    new_elem->prev = NULL;
    return new_elem;
}

// Insert element 'elem' into list 'root'
void insert_into_list(list_element* root, list_element* elem)
{
    std::swap(elem->value, root->value);
    elem->prev = root;
    elem->next = root->next;
    if(root->next != NULL) {
        root->next->prev = elem;
    }
    root->next = elem;
}

// Print list
void print_list(list_element* root)
{
    unsigned int i = 0;
    list_element* elem = root;
    while(elem != NULL) {
        cout << "Val[" << i << "] = " << elem->value << endl;
        elem = elem->next;
        ++i;
    }
}

// Print list
void print_list_reverse(list_element* root)
{
    unsigned int i = 0;
    list_element* elem = root;
    while(elem != NULL) {
        cout << "Val[" << i << "] = " << elem->value << endl;
        elem = elem->prev;
        ++i;
    }
}

// Delete list
void delete_list(list_element* root)
{
    list_element* elem = root;
    list_element* to_delete = NULL;
    while(elem != NULL) {
        to_delete = elem;
        elem = elem->next;
        delete to_delete;
    }
}

// TODO: implement this
void swap_elements(list_element* a, list_element* b){
    if(a->next != b){
        a->next= b->next;
        b->prev = a->prev;
        a->prev = b->prev;
        b->next = a->next;
    }
    else if(b->next = nullptr){
        a->next= nullptr;
        b->prev = a->prev;
        a->prev = b->prev;
        b->next = a->next;
    }
}


int main()
{
    int n = 5;
    //======================= CREATE
    list_element* root = create_list_element(0);
    for(int i = 1; i < n; i++)
    {
        list_element* elem = create_list_element(i);
        insert_into_list(root, elem);
    }

    cout << "List:" << endl;
    print_list(root);

    //======================= TEST

    int a = 1, b = 3;
    cout << "We are going to swap elements " << a << " and " << b << endl;

    list_element *ptr_a = nullptr, *ptr_b = nullptr, *cur;
    int val_a = -1, val_b = -1;

    cur = root;
    for(int i = 0; i < n; i++) {
        if(i == a) {
            ptr_a = cur;
            val_a = cur->value;
        }
        if(i == b) {
            ptr_b = cur;
            val_b = cur->value;
        }
        cur = cur->next;
    }

    cout << "Values by pointers before swap: " << endl;
    cout << "    *a = " << val_a << endl;
    cout << "    *b = " << val_b << endl;

    swap_elements(ptr_a, ptr_b);

    cout << "Values by pointers after swap: " << endl;
    cout << "    *a = " << val_a << endl;
    cout << "    *b = " << val_b << endl;

    cout << "List after swap:" << endl;
    print_list(root);

    //======================= CLEAN

    delete_list(root);
    return 0;
}