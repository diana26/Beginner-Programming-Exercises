
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

using namespace std;
map<char, int> frequencies;



int main()
{
	int array[1001];
	int temp;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	int j = 0, ans = 0;
	for (int i = 1; i <= m; i++) {
		if (array[j] <= 0) {
			array[j] = 0;
		}
		if (array[i] <= 0) {
			//cout << array[j] << " ";
			ans = ans + abs(array[j]);
			j++;
		}
	}
	cout << ans;
	return 0;
}

