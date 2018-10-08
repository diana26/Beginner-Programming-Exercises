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


void Longest(char *s) {
	int n = strlen(s);
	cout << n;
	bool table[6][6];
	memset(table, 0, sizeof(table));
	for (int i = 0; i < n; ++i)
		table[i][i] = true;

	// check for sub-string of length 2. 
	int start = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		if (s[i] == s[i + 1])
		{
			table[i][i + 1] = true;
			start = i;
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}


int main() {
	char s[] = "geekeg";
	Longest(s);
	return 0;
}





