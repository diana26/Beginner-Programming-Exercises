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


vector<int> addToArrayForm(vector<int>& A, int K) {
	vector<int>v;
	int auxi, rema = 0, p = A.size() - 1;
	while (K > 0) {
		int aux = K % 10;
		K /= 10;
		auxi = A[p] + aux + rema;
		if (auxi > 9) {
			auxi = auxi % 10;
			v.push_back(auxi);
			rema = 1;
		}
		else if (auxi <= 9) {
			v.push_back(auxi);
			rema = 0;
		}
		if (p == 0 && K > 0) {
			while (K > 0) {
				int auxi2 = K % 10;
				auxi2 = auxi2 + rema;
				if (auxi2 > 9) {
					v.push_back(auxi2 % 10);
					rema = 1;
				}
				else {
					v.push_back(auxi2);
					rema = 0;
				}
				K /= 10;
				
			}
		}
		p--;
	}
	cout << p << endl;
	while (p >= 0) {
		auxi = A[p] + rema;
		if (auxi > 9) {
			auxi = auxi % 10;
			v.push_back(auxi);
			rema = 1;
		}
		else if (auxi <= 9) {
			v.push_back(auxi);
			rema = 0;
		}
		if (p == 0)
			break;
		p--;
	}
	if (rema == 1)
		v.push_back(rema);
	reverse(v.begin(), v.end());
	return v;
}

int main() {
	vector<int>v = { 6 };
	vector<int> ans = addToArrayForm(v, 809);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
	return 0;
}

