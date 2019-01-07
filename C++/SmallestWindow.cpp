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
typedef pair<int, int> ii;

string LowerSubs(string s1, string s2) {
	map<char, int> target;
	map<char, int> current;
	int idx = -1;
	int cnt = 0, l = 0, ans = INT_MAX;
	for (int i = 0; i < s2.length(); i++) {
		target[s2[i]]++;
	}

	for (int i = 0; i < s1.length(); i++) {
		if (target.find(s1[i]) != target.end()) {
			current[s1[i]]++;
			if (current[s1[i]] == target[s1[i]]) {
				cnt++;
			}
		}

		while (cnt == target.size()) {
			if (i - l + 1 < ans) {
				ans = i - l + 1;
				idx = l;
			}

			if (target.find(s1[l]) != target.end()) {
				if (target[s1[l]] == current[s1[l]]) {
					cnt--;
				}
				current[s1[l]]--;
			}
			l++;
		}
	}

	cout << ans << endl;
	return s1.substr(idx, ans);
}


int main()
{
	cout << LowerSubs("cbcadbac", "ab");

	return 0;
}






