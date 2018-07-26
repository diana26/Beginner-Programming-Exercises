
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

vector<int> answer (vector<int>list1, vector<int> list2) {
	int first = 0;
	int last = list1.size() - 1;
	vector<int>Answer;
	for (int i = 0; i < list1.size(); i++) {
		Answer.push_back(list1[i]);
		Answer.push_back(list2[last]);
		
		last--;
	}
	return Answer;
}
int main()
{
	int n, x, y;
	cin >> n;
	vector<int>list1;
	vector<int>list2;
	vector<int>result;
	for (int i = 0; i < n; i++) {
		cin >> x;
		cin >> y;
		list1.push_back(x);
		list2.push_back(y);
	}
	result = answer(list1, list2);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
		cout << " ";
	}
	return 0;
}


