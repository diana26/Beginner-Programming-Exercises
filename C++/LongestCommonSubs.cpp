#include <map>
#include <set>
#include <unordered_set>
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
//#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
int dp[100005][100005];
string s1, s2;
//LCS with bottom up
/*int LCS() {
	for (int i = 0; i < s1.length(); i++) {
		for (int j = 0; j < s2.length(); j++) {
			if (s1[i] == s2[j]) {
				dp[i + 1][j + 1] = dp[i][j] + 1;
			}
			else {
				dp[i + 1][j + 1] = max(dp[i][j + 1], max(dp[i][j], dp[i + 1][j]));
			}
		}
	}

	dp[s1.length()][s2.length()];
}*/
//LCS with top down
int LCS(int i, int j) {
	if (i >= s1.length() || j >= s2.length())
		return 0;

	if (dp[i][j] != -1)
		return dp[i][j];

	int ret = 0;
	if (s1[i] == s2[j]) {
		ret = 1 + LCS(i + 1, j + 1);
	 }
	else {
		ret = max(LCS(i + 1, j), max(LCS(i, j + 1), LCS(i + 1, j + 1)));
	}

	dp[i][j] = ret;
	return ret;
}

int main()
{
	for (int i = 0; i < s1.length(); i++) {
		for (int j = 0; j < s2.length(); j++) {
			dp[i][j] = -1;
		}
	}

	cout << LCS(0, 0) << endl;

	return 0;
}






