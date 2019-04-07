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
typedef pair<int, int> pii;

set<int>s;
int main() {
	int n, m, k, x;
	cin >> n >> m >> k;
	vector<int>p, p1, aux;
	vector<vector<int>>ans;
	vector<pii> vecPair(n);
	for (int i = 0; i < n; i++) {
		cin >> vecPair[i].first;
		vecPair[i].second = i;
	}
	sort(vecPair.begin(), vecPair.end(), greater<pair<int,int>>());
	/*for (int i = p.size() - 1; i >= p.size() - (m*k); i--) {
		s.insert(p[i]);
	}
	for (auto it : s)
		cout << it << " ";*/
	int r = 0;
	for (int i = 0; i < m*k; i++) {
		r += vecPair[i].first;
		aux.push_back(vecPair[i].second);
	}
	for (int i = 0; i < m*k; i++) {
		cout << aux[i] << " ";
	}
	sort(aux.begin(), aux.end());
	cout << endl;
	vector<int> division(k - 1);
	for (int i = 0; i < k - 1; ++i)
		division[i] = aux[(i + 1)*m - 1];

	cout << r << endl;
	for (int p : division)
		cout << p + 1 << " ";
	return 0;
}

