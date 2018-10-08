
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

stack<int> st1, st2;

void push_st(int val) {
	st1.push(val);
	if (st2.empty() || st2.top() > val) {
		st2.push(val);
	}
}

int getMin() {
	return st2.top();
}

int main() {
	push_st(13);
	push_st(18);
	push_st(5);
	push_st(7);
	push_st(16);
	cout << getMin();
	push_st(5);
	push_st(2);
	push_st(4);
	cout << getMin();
	return 0;
}
