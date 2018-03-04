
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
#include <utility>

using namespace std;
struct coordenates {
	int x;
	int y;
};

int main()
{
	int n, ans1 = 0, ans2 = 0;
	cin >> n;
	coordenates a[100], b[100];
	for(int i =0; i<n; i++)
	{
		cin >> a[i].x;
		cin >> b[i].y;
	}
	for (int i = 0; i < n; i++)
	{
		ans1 = ans1 + a[i].x;
		ans2 = ans2 + b[i].y;
	}
	cout << ans1;
	cout << " ";
	cout << ans2;
	return 0;
}

