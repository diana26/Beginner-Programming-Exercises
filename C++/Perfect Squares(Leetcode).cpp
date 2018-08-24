
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

int dp[100005];

int solve(int n) {
	if (!n)
		return 0;

	if (dp[n] != -1)
		return dp[n];

	int i = 1;
	int ret = INT_MAX;
	while (i * i <= n) {
		ret = min(ret, solve(n - i * i) + 1);
		i++;
	}

	return dp[n] = ret;
}

int main() {

	memset(dp, -1, sizeof(dp));
	cout << solve(12);
	return 0;

}
