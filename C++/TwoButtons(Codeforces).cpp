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
typedef pair<int, int> ii;

bool vis[100005];

int main()
{
	int n, m;
	cin >> n >> m;
	queue<ii> q;
	q.push(ii(n, 0));
	while (!q.empty()) {
		ii u = q.front();
		q.pop();
		if (u.first == m) {
			cout << u.second << endl;
			break;
		}

		if (u.first < 0 || vis[u.first])
			continue;
		else {
			vis[u.first] = true;
			if(u.first < m)
				q.push(ii(u.first * 2, u.second + 1));
			q.push(ii(u.first - 1, u.second + 1));
		}
	}
	return 0;
}






