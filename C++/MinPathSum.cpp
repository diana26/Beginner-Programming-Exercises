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
typedef pair<int, int> pii;


int minPathSum(vector<vector<int>>& grid) {
	int dp[1000][1000];
	int aux = 0;
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[i].size(); j++) {
			if (i == 0 && j == 0) {
				dp[i][j] = grid[i][j];
			}
			else if (i == 0 && j != 0) {
				dp[i][j] = grid[i][j] + dp[i][j - 1];
			}
			else if (i != 0 && j == 0) {
				dp[i][j] = grid[i][j] + dp[i - 1][j];
			}
			else {
				dp[i][j] = min(dp[i][j - 1], dp[i - 1][j]) + grid[i][j];
			}
			aux = j;
		}
	}
	return dp[grid.size() - 1][aux];
}


int main() {
	vector<vector<int>>v = { {2,3,4}, {1,2,5}, {4,5,8}, {9,10,1} };
	int ans = minPathSum(v);
	cout << ans;
	return 0;
}

