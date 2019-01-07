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
#include <assert.h>
#include <thread>

#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif

using namespace std;


#define MOD 1000000007
//----------------------------------------------------------------------------------------------------------------------




int main() {
	int n, k, x, maxi = INT_MIN, u = 0, amount;
	unordered_map<int, int> m;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> x;
		v[i] = x;
	}

	for (int i = 0; i < n; i++) {
		m[v[i]]++;
		maxi = max(maxi, m[v[i]]);
	}
	amount = maxi / k;
	if (maxi % k != 0) {
		amount++;
	}

	for (auto it: m) {
		u += (amount * k) - it.second;
	}
	cout << u;
	return 0;

}


//======================================================================================================================