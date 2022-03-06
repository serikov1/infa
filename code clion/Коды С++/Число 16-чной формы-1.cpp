#include<iostream>
using namespace std;
unsigned int get_really_any_hexadecimal() {
	char n;
	unsigned long int sum = 0;

	do {
		cin.get(n);
		if (!(n >= '0' and n <= '9')  and (n != '\n' and n != ' '))
			return 0;
		if (n >= '0' and n <= '9')
			sum = n - 48 + sum * 16;
		if (n >= 'A' and n <= 'F'||n >= 'a' and n <= 'f' )
			sum = n - 55 + sum * 16;

	} while (n != '\n' and n != ' ');
	return sum;
}