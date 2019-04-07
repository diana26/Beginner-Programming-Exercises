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


int main() {
	int a, b, c, x, y, z;
	cin >> x >> y >> z >> a >> b >> c;
	if (x > a) {
		cout << "NO";
		return 0;
	}
	a = a - x;
	if (a >= y) {
		a = a - y;
		y = 0;
	}
	else if (a < y) {
		y = y - a;
		a = 0;
	}
	if (b >= y) {
		b = b - y;
		y = 0;
	}
	if (b < y) {
		cout << "NO";
		return 0;
	}
	if ((a + b + c) >= z)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

