#include <iostream>
using namespace std;
int main()
{
	unsigned long long a, b;
	b = 1;
	cin >> a;
	
		for (unsigned int i = 1;i < a + 1;i++)
		{
			b *= i;
		}
	cout << b << endl;
	return 0;
}