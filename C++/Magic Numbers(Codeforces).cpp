
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

int main()
{
	string n;
	cin >> n;
	bool flag = true;
	for (int i = 0; i < n.length();)
	{
		if (n[i] == '1')
		{
			i++;
			if (n[i] == '4')
			{
				i++;
				if (n[i] == '4')
				{
					
					i++;
				}
			}
			
		}
		else
		{
			cout << "NO";
			flag = false;
			break;
		}
		
	}
	if (flag)
	{
		cout << "YES";
	}

	return 0;
}

