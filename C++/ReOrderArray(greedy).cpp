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

vector<int> ReOrder(vector<int>myVect) {
	for (int i = 1; i < myVect.size() - 1; i++) {
		if (myVect[i - 1] < myVect[i]) {
			if (myVect[i + 1] > myVect[i])
				swap(myVect[i], myVect[i + 1]);
		}
		else
			if (myVect[i + 1] < myVect[i])
				swap(myVect[i], myVect[i + 1]);
	 }
	return myVect;
}

	int main() {
		vector<int> myVect = { 3, 1, 5, 10, 9, 7};
		vector<int> ans;
		ans = ReOrder(myVect);
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << " ";
		}
		return 0;
}





