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

int LengthUniqueElements(vector<int>vec, int n) {
	int ans = 0, p = 0, q = 1;
	for (int i = 0; i < n; i++) {
		if (vec[p] == vec[q]) {
			q++;
		}
		if (vec[p] != vec[q]) {
			p++;
			vec[p] = vec[q];
			q++;

		}
	}
	return p;
}


int main() {
	vector<int>vect = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
	cout << LengthUniqueElements(vect, vect.size() - 1);
	return 0;
}





