
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
	int n, x, countX = 0, countY = 0, countZ = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		
			cin >> x;
			countX = countX + x;
			cin >> x;
			countY = countY + x;
			cin >> x;
			countZ = countZ + x;
			
	}
	if (countX == 0 && countY == 0 && countZ == 0)
	{
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}

