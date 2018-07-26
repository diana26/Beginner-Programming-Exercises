
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

int main()
{
	int n, Array[1001];
	bool f = false;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> Array[i];
	}
	int j = 0;
	for (int i = 1; i <= n; i++) {
		if (Array[i] % Array[j] == 0) {
			j++;
		}
		else {
			cout << "NO FRIENDS";
			f = true;
			break;
		}
	}
	if (!f)
		cout << "FRIENDS";

	return 0;
}


