#include<map>
#include<vector>
#include<iostream>

std::ostream& operator<<(std::ostream& out, std::map<int, int>& output) {
    for (auto i = 0u; i < output.size(); i++){
        if (output[i] != 0) {
            out << "Amount " << i << " in map" << ": "<< output[i] << "\n";
        }
    }
    return out;
}

int main(){
//    std::map<int, int> dictionary;
//    std::vector<int> help;
//    int n, num;
//    std::cin>>n;
//    help.resize(n);
//    for(auto i= 0u;i<2*n;i++){
//        std::cin>>num;
//       help[i]=num;
//    }
//    for(int i=0u;i<n;i++){
//        for(int j=0;j<n-1;j++){
//            if(help[i]==help[j] & i!=j) dictionary[help[i]]++;
//        }
//        std::cout<<dictionary[i]<<" ";
//    }
    std::map<int, int> numbers;
    int N;
    std::cin >> N;
    for (auto i = 0u; i < N; i++) {
        int num;
        std::cin >> num;
        numbers[num]++;
    }
    std::cout << numbers;
}
