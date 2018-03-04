
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
char first_recurrence(string &s) {
	unordered_set<char>letters;
	for (int i = 0; i < s.length(); i++)
	{
		char x = s[i];

		if (letters.find(x) != letters.end())
		{
			return x;
		}
		else
			letters.insert(x);
	}
	return '/0';
}

int main()
{
	string s;
	cin >> s;
	cout << first_recurrence(s);
	return 0;
}

