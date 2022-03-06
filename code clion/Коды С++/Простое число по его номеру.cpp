#include <iostream>
bool q(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int main() {
	using namespace std;
	int n, k;
	cin >> n;
	k = 1;
	for (int i = 0; i <= n; k++) {
		if (q(k))
			i++;
	}
	cout << k - 1;
}
