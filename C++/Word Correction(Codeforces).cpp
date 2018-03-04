
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

bool answer(char x) {
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y')
		return true;
	return false;
}


int main()
{
	int n;
	cin >> n;
	string s;	
	cin  >> s;
	string Aux = "";
	for (int i = 0; i < n; i++)
	{
		if (!i)
			Aux += s[i];
		else if (answer(s[i]) && answer(s[i - 1]))
			continue;
		else
			Aux += s[i];
	}
		cout << Aux;
	
	return 0;
}

