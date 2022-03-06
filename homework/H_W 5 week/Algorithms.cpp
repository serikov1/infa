#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <random>
#include <ctime>
#include <iterator>

template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> vector) {
    os << '[';
    std::copy(std::begin(vector), std::prev(std::end(vector)),std::ostream_iterator<T>(os, ", "));
    return os << *std::prev(std::end(vector)) << ']';
}


int main(){

    // #1 Generate sequence from "1" to "10"
    std::vector<int> list(10);
    std::iota(std::begin(list), std::end(list), 1);

    // #2 Push back a few elements from std::cin
    int m, n, p;
    std::cin>>m;
    list.push_back(m);
    std::cin>>n;
    list.push_back(n);
    std::cin>>p;
    list.push_back(p);
    std::cout<<"#2: "<<list<<std::endl;

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dis(0, 100);

    // #3 Shuffle randomly
    auto rng = std::default_random_engine();
    std::shuffle(std::begin(list), std::end(list), rng);
    std::cout<<"#3: "<<list<<std::endl;

    // #4 Erase duplicate elements
    std::sort(std::begin(list), std::end(list));
    std::cout<<"#4: "<<list<<std::endl;
    auto to_delete = std::unique(std::begin(list), std::end(list));
    list.erase(to_delete, std::end(list));
    std::cout<<"#4: "<<list<<std::endl;

    // #5 Count amount of odd numbers
    auto col = std::count_if(std::begin(list), std::end(list), [](auto elem){return elem % 2 != 0;});
    std::cout<<"#5: "<<col<<std::endl;

    // #6 Find min and max elements from sequence
    auto [min, max] = std::minmax_element(std::begin(list), std::end(list));
    std::cout <<"#6: "<< *min << ' ' << *max << std::endl;

    // #7 Find at least one simple number
    auto simple = [](auto elem){
        if(elem <= 2) return false;
        for(int i = 2; i < sqrt(elem); i++){
            if(elem % i == 0) return false;
        }
        return true;
    };
    auto simp = std::find_if(std::begin(list), std::end(list), simple);
    std::cout<<"#7: "<< *simp <<std::endl;

    // #8 Replace all elements with their squares
    std::transform(std::begin(list), std::end(list), std::begin(list), [](auto elem){return elem * elem;});
    std::cout <<"#8: "<< list <<std::endl;

    // #9 Make the second sequence from N random elements, where N is length the first sequence
    std::vector<int> list2 (list.size());
    std::generate(std::begin(list2), std::end(list2), std::bind(dis, std::ref(mt)));
    std::cout<<"#9: "<<list2<<std::endl;

    // #10 Find the sum of elements from the second sequence
    auto sum = std::accumulate(std::begin(list2), std::end(list2), 0);
    std::cout<<"#10: "<<sum<<std::endl;

    // #11 Replace a few of the first elements with "1" from the second sequence
    std::replace_if(std::begin(list2), std::end(list2) - 5,[](auto elem){return elem;}, 1);
    std::cout<<"#11: "<<list2<<std::endl;

    // #12 Make the third sequence from difference the first and the second sequences
    std::vector<int> list3(list.size());
    std::transform(std::begin(list), std::end(list), std::begin(list2),std::begin(list3), [](auto lhs, auto rhs){return lhs - rhs;});
    std::cout<<"#12: "<<list3<<std::endl;

    // #13 Replace with "0" all negative elements from the third sequence
    std::replace_if(std::begin(list3), std::end(list3),[](auto elem){return elem < 0;}, 0);
    std::cout<<"#13: "<<list3<<std::endl;

    // #14 Erase all null elements from the third sequence
    auto to_delete3 = std::remove_if(std::begin(list3), std::end(list3),[](auto element){return element == 0;});
    list3.erase(to_delete3, std::end(list3));
    std::cout<<"#14: "<<list3<<std::endl;

    // #15 Reverse the third sequence
    std::reverse(std::begin(list3), std::end(list3));
    std::cout<<"#15: "<<list3<<std::endl;

    // #16 Sort the third sequence to find top-3 the highest elements
    std::sort(std::begin(list3), std::end(list3));
    std::partial_sort(std::begin(list3), std::end(list3),std::end(list3)-3);
    std::cout<<"#16: ";
    for(int i = 0; i < 3; i++) std::cout<<list3[i]<<" ";
    std::cout<<std::endl;

    // #17 Sort the first and the second sequence from smallest to highest
    std::sort(std::begin(list), std::end(list));
    std::cout<<"#17: "<<list<<std::endl;
    std::sort(std::begin(list2), std::end(list2));
    std::cout<<"#17: "<<list2<<std::endl;

    // #18 Make the fourth sequence from merge the first and the second sequences
    std::vector<int> list4;
    std::merge(std::begin(list), std::end(list), std::begin(list2), std::end(list2), std::back_inserter(list4));
    std::cout<<"#18: "<<list4<<std::endl;

    // #19 Find an ordered range to insert "1"
    auto pair = std::equal_range(std::begin(list4), std::end(list4), 1);
    std::cout<<"#19: "<<"["<<*pair.first<<", "<<*pair.second<<"]"<<std::endl;

    // #20 Output of all sequences
    std::cout<<"#20: "<<"The first sequences is: "<<list<<std::endl;
    std::cout<<"#20: "<<"The second sequences is: "<<list2<<std::endl;
    std::cout<<"#20: "<<"The third sequences is: "<<list3<<std::endl;
    std::cout<<"#20: "<<"The fourth sequences is: "<<list4<<std::endl;
}
