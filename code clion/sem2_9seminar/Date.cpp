#include<iostream>
#include<iomanip>

struct Date{
    int year, month, day;
    bool operator<(Date other){
        return std::tuple(year, month, day)<std::tuple(other.year, other.month, other.day);
    }
};

