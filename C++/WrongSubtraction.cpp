
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

typedef long long ll;
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	while (k) {
		if (n % 10 != 0) {
			n = n - 1;
		}
		else {
			n = n / 10;
		}
		k--;
	}
	cout << n;
	return 0;
}



