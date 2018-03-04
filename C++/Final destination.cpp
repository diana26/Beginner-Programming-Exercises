
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
	int  ans1 = 0, ans2 = 0;
	string s;
	cin >> s;
	coordenates a[100] = { 0 }, b[100] = { 0 };
	for(int i =0; i<s.length(); i++)
	{
		if (s[i] == 'L') {
			ans1 = ans1 + a[i].x - 1;
		}
		else if (s[i] == 'R') {
			ans1 = ans1 + a[i].x + 1;
		}
		else if (s[i] == 'U') {
			ans2 = ans2  + b[i].y + 1;
		}
		else if (s[i] == 'D')
		{
			ans2 = ans2 + b[i].y - 1;
		}
	}
	
	cout << ans1;
	cout << " ";
	cout << ans2;
	return 0;
}

