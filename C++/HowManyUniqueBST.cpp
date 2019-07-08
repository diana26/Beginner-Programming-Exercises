#include <iostream>
#include <string>
#include <sstream>
#include <deque>
#include <vector>
#include <map>
#include <istream>
#include <iostream>
#include <fstream>  
#include <math.h>
#include <algorithm>

using namespace std;

int uniqueBST(int n) {
	if (n <= 0) return 0;
	vector<int>v;
	v.push_back(1);
	for (int i = 1; i <= n; i++) {
		int curr = 0;
		for (int j = 1; j <= i; j++) {
			curr += v[j - 1] * v[i - j];
		}
		v.push_back(curr);
	}
	return v[n];
}

int main() {
	int n = 3;
	int ans = uniqueBST(n);
	cout << ans;
 	return 0;
}