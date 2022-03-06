#include <iostream> 
using namespace std;

int main() {
	int s;
	char string[] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	s = 0;
	cin>> string;
	for (unsigned int i = 0; i < sizeof(string); i++) {
		if (string[i] == '1')
			s++;
	}
	cout<< s;
}