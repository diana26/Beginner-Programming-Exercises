
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
int main()
{
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s.length() < 11 || s.length() > 100)
		{
			cout << s << endl;
		}
		else
		{
			for (int i = 0; i < s.length(); i = i + (s.length()))
			{
				int x = s.length() - 2;
				cout << s[i] << x << s[i + (s.length() - 1)] << endl;
			}
		}
	}
	return 0;
}

