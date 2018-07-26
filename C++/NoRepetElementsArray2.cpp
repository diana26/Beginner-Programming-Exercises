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

typedef long long ll;
using namespace std;
stack<int>st;
map<ll, int> answer;
	int main() {
		int array[100], n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> array[i];
		for (int i = 0; i < n; i++)
			answer[array[i]]++;

		for (int i = 0; i < n; i++) {
			cout << " " << array[i];
			cout << endl;
		}
		for (auto it : answer)
		{
			cout << " "<< it.first;
		}
		return 0;
}






