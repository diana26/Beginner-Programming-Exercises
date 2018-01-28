
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
	int T, N;
	string str;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cin >> str;
		int count = 0, answer = 0;
		for (int j = 0; j <= str.length(); j++)
		{
			if (str[j] >= 48 && str[j] <= 57)
			{
				count++;
			}	
			else 
				if(count != 0)
				{
					answer++;
					count = 0;
				}
		}
		cout << answer << endl;
	}
	return 0;
}