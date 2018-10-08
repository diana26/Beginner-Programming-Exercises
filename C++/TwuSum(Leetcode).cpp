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
	set<int> save;
	vector<int> ans;
	int y = 0, w = 0;
	for (int i = 0; i < myVect.size(); i++) {
		int aux = x - myVect[i];
		if (save.find(aux) != save.end()) {
			y = i;
			w = aux;
			break;
		}
		else
			save.insert(myVect[i]);
	}
	if (y != 0 && w != 0) {
			
			for (int i = 0; i < myVect.size(); i++) {
				if (myVect[i] == w)
					w = i;
			}
			ans.push_back(w);
			ans.push_back(y);
	}
	return ans;
}

	int main() {
		vector<int> myVect = { 2, 11, 7, 15 };
		vector<int> ans;
		int x;
		cin >> x;
		ans = TwoSum(myVect, x);
		if (!ans.empty()) {
			for (int i = 0; i < ans.size(); i++) {
				cout << ans[i];
			}
		}
		else
			cout << "No elements ";
		return 0;
}





