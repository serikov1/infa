#include <iostream>

using namespace std;

int main()
{
	int n, pol[1000], otr[1000], k_otr = 0, k_pol = 0;
	cin>> n;
	for (int m = 0; m < n; m++)
	{
		int x;
		cin>> x;
		if (x < 0)
		{
			otr[k_otr] = x;
			k_otr++;
		}
		if (x >= 0)
		{
			pol[k_pol] = x;
			k_pol++;
		}
	}
	for (int i = 0; i < k_pol - 1; i++)
	{
		for (int j = k_pol - 1; j > i; j--)
		{
			if (pol[j] >= pol[j - 1]) swap(pol[j], pol[j - 1]);
		}
	}
	for (int i = 0; i < k_otr - 1; i++)
	{
		for (int j = k_otr - 1; j > i; j--)
		{
			if (otr[j] <= otr[j - 1]) swap(otr[j], otr[j - 1]);
		}
	}
	for (int i = k_pol - 1; i >= 0; i--)
	{
		cout<< pol[i]<< ' ';
	}
	for (int i = k_otr - 1; i >= 0; i--)
	{
		cout<< otr[i]<< ' ';
	}

	return 0;
}