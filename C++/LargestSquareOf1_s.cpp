
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

int dp[1000][1000];

void solution(int myArray[5][5], int n, int m) {
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			dp[i][j] = myArray[i][j];
		}
	}*/
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (myArray[i][j ] == 1) {
				dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
				
			}
			if (dp[i][j] > result)
				result = dp[i][j];
		}
	}
	cout << result;
}

int main() {
	int mat[5][5] = { { 0, 0, 1, 1, 1 },
	{ 1, 0, 1, 1, 1 },
	{ 1, 0, 1, 1, 1 },
	{ 0, 1, 1, 1, 1 },
	{ 1, 0, 1, 1, 1 },
	};
	solution(mat, 5, 5);
	return 0;
}
