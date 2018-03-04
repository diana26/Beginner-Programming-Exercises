
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
#include <utility>

using namespace std;
long long Array[1000005];
int main()
{
	int n;
	cin >> n;
	vector<long long>numbers;
	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}
	long long  x = INT_MAX;
	long long  y = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		x = min(x, Array[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (x == Array[i])
			numbers.push_back(i);
	}
	
	for (int i = 1; i < numbers.size(); i++)
	{
		y = min(y, numbers[i] - numbers[i - 1]);
	}
	cout << y;
	return 0;
}

