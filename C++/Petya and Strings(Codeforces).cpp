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
	int sum;
	string str1, str2;
	cin >> str1 >> str2;
	for (int i = 0; i < str1.size(); i++)
	{
		if ('A' <= str1[i] && str1[i] <= 'Z') 
		{
			str1[i] = char(((int)str1[i]) + 32);
		}
	}
	for (int i = 0; i < str2.size(); i++)
	{
		if ('A' <= str2[i] && str2[i] <= 'Z')
		{
			str2[i] = char(((int)str2[i]) + 32);
		}
	}
	for (int i = 0; i < str1.size(); i++)
	{
		
			if (str1[i] > str2[i])
			{
				sum = 0;
				break;
			}
			else if (str1[i] < str2[i])
			{
				sum = 1;
				break;
			}
		
		else if (str1[i] == str2[i])
			sum = 2;
	}
	if (sum == 0)
		cout << "1";
	else if (sum == 1)
		cout << "-1";
	else if (sum == 2)
		cout << "0";
	return 0;
}