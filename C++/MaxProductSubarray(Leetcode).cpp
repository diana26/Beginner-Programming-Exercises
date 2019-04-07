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

int addToArrayForm(vector<int>& A, int K) {
	string s;
	for (int i = 0; i < A.size(); i++) {
		s += to_string(A[i]);
	}
	int x = stoi(s);
	cout << x;
}

int main() {
	vector<int>v = { 1, 2, 3 , 0 };
	int ans = addToArrayForm(v);
	cout 
	return 0;
}
