#include <iostream>
#include<string>
#include <algorithm>
#include <cstddef>
#include <vector>

using namespace std;
void Pyramid(int n)
{
	int k = 2 * n - 2;

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<k; j++)
			cout << " ";

		k = k - 1;

		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
}


int main()
{
	int T, n;
	cin >> T;
	for (int i=1; i<=T; i++)
	{
		cin >> n;
		Pyramid(n);
	}
	return 0;
}