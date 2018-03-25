
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
stack<int>st;

int main()
{
	stack<int>st;
	int n, ans = 0, x;
	cin >> n;
	cin >> x;
	st.push(x);
	for (int i = 0; i < n-1; i++) {
		cin >> x;
		if (x == 0)
			st.pop();
		else
			st.push(x);
	}
	while (!st.empty())
	{
		ans = ans + st.top();
		st.pop();
	}
	
	cout << ans;
	return 0;
}


