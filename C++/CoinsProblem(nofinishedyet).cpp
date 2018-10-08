
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

int dp[1001];

int solve(vector<int> coins, int x) {
	dp[0] = 0;
	for (int i = 1; i <= x; i++) {
		for (int j = 0; j < coins.size(); j++) {
			if (i >= coins[j]) {
				dp[i] = min(dp[i], dp[i - coins[j]] + 1);
			}
		}
	}
	for (int i = 0; i < 12; i++) {
		cout << dp[i] << " ";
	}
	return dp[x];
}


int main() {
	vector<int> ans = { 1, 2, 4 };
	cout << solve(ans, 12);
	return 0;
}
