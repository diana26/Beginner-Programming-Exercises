#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <map>
#include <istream>
#include <iostream>
#include <fstream>  
#include <math.h>
#include <algorithm>

using namespace std;

void SubArrayWithSumK(vector<int>V, int K) {
	map<int, int>m;
	int curr = 0;
	for (int i = 0; i < V.size(); i++) {
		curr += V[i];
		if (curr == K) {
			cout << 0 << " to " << i;
			return;
		}
		if (m.find(curr - K) != m.end()) {
			cout << m[curr - K] + 1 << " to " << i;
			return;
		}
		m[curr] = i;
	}
	return;
}


int main() {
	int x, K, y;
	cin >> x;
	vector<int>v;
	for (int i = 0; i < x; i++) {
		cin >> y;
		v.push_back(y);
	}
	cin >> K;
	SubArrayWithSumK(v, K);
	return 0;
}