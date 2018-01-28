
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

long long Array[1005];
int main()
{
	long long n, answer = -1000005;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}

	for (int i = 0; i < n; i++)
	{
		long long x = Array[i];
		long long y = sqrt(x);

		if (x < 0)
			answer = max(answer, x);

		else if (y * y != x)
			answer = max(answer, x);
	}
	cout << answer;
	return 0;
}