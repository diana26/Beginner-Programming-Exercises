
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

int main() {
	vector<int>array;
	int N, maxSum = 0, minSum = 0, x;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		array.push_back(x);
	}
	sort(array.begin(), array.end());
	
	for (int i = 1; i < N; i++) {
		maxSum = maxSum + array[i];
	}
	for (int i = 0; i < N - 1; i++) {
		minSum = minSum + array[i];
	}
	cout << minSum << " " << maxSum;
	return 0;
}

