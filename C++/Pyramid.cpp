
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
	int T, n, k;
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		cin >> n;
		k = n;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j < k; j++)

				cout << " ";
			k--;

			for (int j = 1; j <= 2 * i - 1; j++)

				cout << "*";
			cout << "\n";
		}
	}
	return 0;
}