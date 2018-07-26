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

vector<int> TwoSum(vector<int>myVect, int x) {
	vector<int> ans;
	int l = 0, r = myVect.size() - 1;
	sort(myVect.begin(), myVect.end());
	while (l < r) {
		if ((myVect[l] + myVect[r] == x)) {
			ans.push_back(l);
			ans.push_back(r); 
			break;
		}
		else if ((myVect[l] + myVect[r] > x)) {
			r--;
		}
		else {
			l++;
		}
	}
	return ans;
}

	int main() {
		vector <int> myVect = {2 , 7, 15, 11};
		int x;
		vector<int> ans;
		cin >> x;
		ans = TwoSum(myVect, x);
		if (!ans.empty()) {
			for (int i = 0; i < ans.size(); i++) {
				cout << ans[i];
			}
		}
		else
			cout << "No elements in array sum x";
		return 0;
}





