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
//#include <bits/stdc++>

typedef long long ll;
using namespace std;

stack<char>st;

int getTotalWater(vector<int>vec, int n, int m) {
	int L = vec[0], R = vec[vec.size() - 1];
	int maxL = 0, maxR = 0, ans = 0;
	while (n <= m) {
			if (L <= R) {
				
				L = vec[n];
				if (L > maxL) {
					maxL = L;
				}
				ans += (maxL - L);
				n++;
			}

			if (L > R) {
				
				R = vec[m - 1];
				if (R > maxR) {
					maxR = R;
				}
				ans += (maxR - R);
				m--;
			}
	}
	return ans;
}

int main() {
	vector<int>vec = { 1,0,1 };
	cout << getTotalWater(vec, 0, vec.size() - 1);
	return 0;
}





