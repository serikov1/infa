#include<iostream>

for (auto i = 1; i < N; i++) {
std::cin » t » x » y;
qw[i].t = t;
qw[i].y = y;
qw[i].x = x;
qw[i].S = std::sqrt((x - qw[i - 1].x) * (x - qw[i - 1].x) + (y - qw[i - 1].y) * (y - qw[i - 1].y));
// std::cout « qw[i].S « " ";
if (qw[i].S / (t - qw[i - 1].t) <= voice) {
cur += qw[i].S;
} else continue;
}
std::cout « cur;
}