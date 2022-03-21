#include<iostream>

template<typename R>
R get_min_value(R& lhs, R& rhs){
    return std::min(lhs, rhs);
}
using std::cout, std::endl, std::string;
int main()
    {
        int a = 5;
        int b = 4;
        string s1 = "abc";
        string s2 = "zxc";
        cout << "Min int: " << get_min_value(a, b) << endl;
        cout << "Min string: " << get_min_value(s1, s2) << endl;
        return 0;
    }

