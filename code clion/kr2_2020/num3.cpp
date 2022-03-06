#include <iostream>
#include <vector>
#include <iomanip>
#include "string"

struct games{
    std:: string name;
    int value;
    std::vector<int> estimation;
    double sum;
};
int main() {
    int n;
    std::cin >> n;
   std::vector<games> Game;
   Game.resize(n);
    for (int i = 0; i < n; i++) {
        std::cin>>(Game[i].name) ;
        std::cin  >> Game[i].value;
        Game[i].estimation.resize(Game[i].value);
        for (int j = 0; j < Game[i].value; j++) {
            std::cin >> Game[i].estimation[j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < Game[i].value; j++) {
            Game[i].sum += Game[i].estimation[j];
        }
        Game[i].sum = Game[i].sum / Game[i].value;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (Game[i].sum > Game[j].sum) std::swap(Game[i], Game[j]);
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << Game[i].name << " " << std::fixed << std::setprecision(3) << Game[i].sum << std::endl;
    }
}
