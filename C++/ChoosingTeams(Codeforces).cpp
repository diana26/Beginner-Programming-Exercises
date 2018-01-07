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
	int n, Array[2005], k, count = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (5 - Array[i] >= k)
		{
			count++;
		}
	}
	cout << count / 3;
	return 0;
}