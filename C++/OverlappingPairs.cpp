
#include <map>
#include <set>
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
#include <unordered_set>
#include <utility>

using namespace std;

vector<pair<int, int>> Overlapping(vector<pair<int, int>>myVect) {
	int start = myVect[0].first;
	int end = myVect[0].second;
	vector<pair<int, int>> curr;
	pair <int, int> x;
	for (int i = 1; i < myVect.size(); i++) {
		if (end < myVect[i].first) {
			//end = myVect[i].second;
			x.second = end;
			x.first = start;
			start = myVect[i].first;
			end = myVect[i].second;
			curr.push_back(x);
		}
		else {
			//start = myVect[i].first;
			end = myVect[i].second;
			x.first = start;
			x.second = end;
		}
		
	}
	x.second = end;
	curr.push_back(x);
	return curr;
}


int main() {
	//vector<pair<int,int>> myVect = { { 1,3 },{ 2, 7 },{ 6, 10 } };
	vector<pair<int, int>> myVect = { { 1,3 },{ 5, 7 },{ 6, 10 } };
	vector<pair<int, int>> ans;
	ans = Overlapping(myVect);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i].first << " " << ans[i].second << endl;
	}
	return 0;
}

