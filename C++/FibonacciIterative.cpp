
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

int Fib(int n) {
	if (n < 2)
		return n;
	int F1 = 0;
	int F2 = 1;
	int F;
	for (int i = 0; i < n; i++)
	{
		F = F1 + F2;
		F1 = F2;
		F2 = F;
	}
	return F;
		
}

int main()
{
	int n;
	cin >> n;
	cout << Fib(n);
	return 0;
}


