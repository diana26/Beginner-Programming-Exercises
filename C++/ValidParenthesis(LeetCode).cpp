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

bool solve(string s) {
	bool flag = 0;
	for (int i = 0; i < s.length(); i++) {
		if (st.empty()) {
			st.push(s[i]);
		}
		else if (s[i] == ')' && st.top() == '(' || s[i] == ']' && st.top() == '[' || s[i] == '}' && st.top() == '{') {
			st.pop();
		}
		else {
			st.push(s[i]);
		}
	}
	if (!st.empty())
		return false;
	else
		return true;
}

int main() {
	cout << solve("(){}[}");
	return 0;
}





