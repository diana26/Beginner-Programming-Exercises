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
//#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
set<int>s;
vector<pair<int, int>>  PairsOfSum(vector<int>vec, int x) {
	vector<vector<pair<int, int>>> ans;
	vector<pair<int,int>>aux;
	int curr;
	for (int i = 0; i < vec.size(); i++) {
		s.insert(vec[i]);
	}
	for (int i = 0; i < vec.size(); i++) {
		curr = x - vec[i];
		if (s.find(curr) != s.end()) {
			aux.push_back(make_pair(vec[i],curr));
			//ans.push_back(aux);
		}
		
	}
	return aux;
}

int main()
{
	vector<int> ans = { 5,7,1,3,2,5,3,7 };
	vector<pair<int, int>> vec = PairsOfSum(ans, 5);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i].first <<"" << vec[i].second;
		cout << endl;
	}

	return 0;
}






