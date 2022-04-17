#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

int main(){
    int n;
    int num;
    std::vector<int> nums_1;
    std::multiset<int> nums_1_s;
    std::vector<int> nums_2;
    std::multiset<int> nums_2_s;
    std::vector<int> diff;
    std::vector<int> result;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>> num;
        nums_1.push_back(num);
        nums_1_s.insert(num);
    }
    for(int i = 0; i < n; i++){
        std::cin>> num;
        nums_2.push_back(num);
        nums_2_s.insert(num);
    }

//    std::set_difference(nums_1_s.begin(), nums_1_s.end(), diff.begin(), diff.end(), std::inserter(result, result.begin()));
    std::set_intersection(nums_1_s.begin(), nums_1_s.end(), nums_2_s.begin(), nums_2_s.end(), std::back_inserter(diff));
//    result.resize(nums_1.size());
    for(int i : nums_1) {
        for (int j = 0; j < diff.size(); j++) {
            if (i == diff[j]) {
                std::cout<<i<<" ";
                diff.erase(std::begin(diff) +j);
                break;
            }

        }
    }
//    for(auto elem: nums_1){
//        std::cout<<elem<<" ";
//    }
//    std::cout<<std::endl;
//    for(auto elem: result){
//        std::cout<<elem<<" ";
}
//}


//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//int main() {
//
//    auto size = 0u;
//    std::cin >> size;
//    std::vector<int> sequence_1(size);
//    std::vector<int> sequence_1_old(size);
//    std::vector<int> sequence_2(size);
//    for (auto elem = 0u; elem < size; elem++) {
//        int numbers;
//        std::cin >> numbers;
//        sequence_1[elem] = numbers;
//        sequence_1_old[elem] = numbers;
//    }
//    for (auto elem = 0u; elem < size; elem++) {
//        int numbers;
//        std::cin >> numbers;
//        sequence_2[elem] = numbers;
//    }
//    std::sort(std::begin(sequence_1), std::end(sequence_1));
//    std::sort(std::begin(sequence_2), std::end(sequence_2));
//    std::vector<int> intersection;
//    set_intersection(sequence_1.begin(), sequence_1.end(), sequence_2.begin(), sequence_2.end(),
//                     std::back_inserter(intersection));
//
//    for (auto i = 0u; i < sequence_1_old.size(); i++) {
//        for (auto j = 0u; j < intersection.size(); j++) {
//            if (sequence_1_old[i] == intersection[j] ) {
//                std::cout << sequence_1_old[i] << " ";
//                auto it = std::begin(intersection);
//                intersection.erase(it + j);
//                break;
//            }
//        }
//    }
//}
