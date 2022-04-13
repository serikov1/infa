#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

int main(){
    int T;
    int N;
    int K;
    int num;
    std::map<int, std::vector<int>> map_of_sequences;
    std::map<int, std::vector<int>> map_of_result;
    std::cin>>T;

    for(int i = 0; i < T; i++) {
        std::cin >> N;
        std::cin >> K;
        for(int j = 0; j < N; j++){
            std::cin>>num;
            map_of_sequences[i].push_back(num);
        }

        std::vector<int> result;
        for(int m = 0; m <= map_of_sequences[i].size() - K; m++){
            std::vector<int> subsequence;
            for(int l = 0; l < K; l++) subsequence.push_back(map_of_sequences[i][m + l]);
            std::sort(std::rbegin(subsequence), std::rend(subsequence));
            result.push_back(subsequence[1]);
        }
        map_of_result[i] = result;
    }

    for(int i = 0; i < T; i++){
        for(auto elem: map_of_result[i]) std::cout<<elem<<" ";
        std::cout<<std::endl;
    }
}


