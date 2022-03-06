#include<iostream>
#include<string>
#include<map>


int main(){
    std::map<int, std::string> days{
            {1, "Mon"},
            {2, "Tue"},
            {3, "Wed"},
            {4, "Thu"},
            {5, "Fri"},
            {6, "Sat"},
            {7, "Sun"}
    };
    std::map<std::string, int> days_amount;
    int n;
    std::cin>>n;
    std::string current_day;
    for(auto i=0u;i<n;i++){
        std::cin>> current_day;
        days_amount[current_day]++;
    }
    for(auto& day: days) {
        auto &num_day = day.second;
        for (int i = 0; i < days_amount[num_day]; i++)
            std::cout << num_day << ' ';
    }
}