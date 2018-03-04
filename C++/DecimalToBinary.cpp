
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
#include <unordered_set>
#include <utility>

using namespace std;


stack<int>bits;
int convertToBinary(int x)
{
	if (x == 1)
	{
		bits.push(x);
		return 1;
	}
	else
	{
		bits.push(x%2);
		return convertToBinary(x / 2);
	}
}

int main()
{
	long long x;
	cin >> x;
	convertToBinary(x);
	while(!bits.empty())
	{
		cout << bits.top();
		bits.pop();
	}
	return 0;
}

