#include <vector>
#include <algorithm>
#include <iostream>

//bool compare_absolutes(int lhs, int rhs) {
//    return std::abs(lhs) > std::abs(rhs);
//}
//
//bool compare_reversed(int lhs, int rhs) {
//    return lhs > rhs;
//}
//
//int main() {
//    std::vector v = {1, 5, -3, 2, -5, 3, -4, 6, 2, -42, -255, 322};
//    std::sort(v.begin(), v.end(), compare_absolutes);
//    for(auto item: v) {
//        std::cout << item << ' ';
//    }
//    }
//    std::cout << std::endl;
//    std::sort(v.begin(), v.end(), std::greater<>());
//    for (auto item: v) {
//        std::cout << item << ' ';
//    }
//}
//    std::cout << std::endl;
//    std::sort(v.begin(), v.end(), [](int lhs, int rhs){
//        return std::abs(lhs) > std::abs(rhs);
//    });
//    for(auto item: v) {
//        std::cout << item << ' ';
//    }
//}
//
//int main(){[](){}();}

//#define jopa (;;)
//
//int main() {
//    for jopa {
//        // ...
//    }
//}

auto someFunc(const std::vector<int>& name) {
    std::cout << name.size();
}

int main() {
    std::vector<int> v{1, 3, 4};
    someFunc(v);
}
