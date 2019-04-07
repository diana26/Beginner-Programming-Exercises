#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <functional>
#include <queue>
#include <bitset>
#include <sstream>
#include <set>
#include <iomanip>
#include <string.h>
#include <unordered_map>
#include <unordered_set>
#include <limits.h>
#include <iterator>
#include <complex>
#include <utility>

using namespace std;

int PrimeNumbers(int n)
{
	int ans = 0;
	bool Array[10001];
	memset(Array, true, sizeof(Array));
	for (int i = 2; i*i <= n; i++)
	{
		if (Array[i] == true) {
			for (int x = i * 2; x <= n; x += i)
				Array[x] = false;
		}
	}
	for (int i = 2; i < n; i++)
		if (Array[i])
			ans++;
	return ans;
}

int main()
{
	int n;
	cin >> n;
	cout << PrimeNumbers(n);
	return 0;
}
