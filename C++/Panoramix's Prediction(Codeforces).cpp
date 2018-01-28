
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <climits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
	int n, m, ArrayPrime[15] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
	string ans;
	cin >> n >> m;
	for (int i = 0; i < 15; i++)
	{
		if (n == ArrayPrime[i])
		{
			if (ArrayPrime[i + 1] == m)
				ans = "YES";
			else
				ans = "NO";
		}
	}
			cout << ans;
	return 0;
}