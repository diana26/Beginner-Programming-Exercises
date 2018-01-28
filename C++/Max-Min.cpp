
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

using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> Array(n);
	for (int i = 0; i<n; i++) 
	{
		cin >> Array[i];
	}
	sort(Array.begin(), Array.end());
	int count = 0;
	for (int i = 1; i < n; i++) 
	{
		if ((Array[i] - Array[i - 1]) >= 2) 
		{
			cout << "NO";
			break;
		}
		else count++;
	}
	if (count == (n - 1)) cout << "YES";
	return 0;
}