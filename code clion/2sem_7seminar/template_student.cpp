#include<iostream>

struct student {
    std::string name;
    std::string id_number_string;
};
template<typename T>
bool check_them(T& x, T& y, T& z);

bool operator==(student& lhs, student& rhs){
    return lhs.id_number_string == rhs.id_number_string;
}