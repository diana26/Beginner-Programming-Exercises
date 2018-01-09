
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
	int n, Array[1001], count = 0, count2 = 0;
	cin >> n;
		for (int i = 0; i < n - 1; i++)
		{
			cin >> Array[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			if (Array[i] == Array[i + 1])
				count++;
			if (Array[i] >= Array[i - 1])
			{
				if (Array[i] == Array[i + 1])
					count2++;
			}
			else
				continue;

		}
		if (count == count2 )
			cout << "NO";
		else
			cout << "YES";
	return 0;
}