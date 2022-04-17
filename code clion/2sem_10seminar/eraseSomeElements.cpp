#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main() {
    int n;
    int k;
    int num;
    std::vector<int> nums_1;
    std::vector<int> result;
    std::multiset<int> to_delete;
    std::multiset<int> nums_1_s;
    std::cin >> n;
    for (auto i = 0u; i < n; i++) {
        std::cin >> num;
        nums_1.push_back(num);
        nums_1_s.insert(num);
    }
    std::cin >> k;
    for (auto elem: nums_1) {
        if (elem > k) to_delete.insert(elem);
    }
    std::set_difference(std::begin(nums_1_s), std::end(nums_1_s), std::begin(to_delete), std::end(to_delete),
                        std::back_inserter(result));
    for (int i: nums_1) {
        for (int j = 0; j < result.size(); j++) {
            if (i == result[j]) {
                std::cout << i << " ";
                result.erase(std::begin(result) + j);
                break;
            }
        }
    }
}
