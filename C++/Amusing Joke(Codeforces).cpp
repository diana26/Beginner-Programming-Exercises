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
	string s1, s2, s3;
	int Array1[26] = { 0 }, Array2[26] = { 0 }, Array3[26] = { 0 }, output=1;
	cin >> s1 >> s2 >> s3;

	for (int i = 0; i < s1.size(); i++)
	{
		Array1[s1[i] - 'A']++;
	}
	for (int i = 0; i < s2.size(); i++)
	{
		Array2[s2[i] - 'A']++;
	}
	for (int i = 0; i < s3.size(); i++)
	{
		Array3[s3[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (Array1[i] + Array2[i] != Array3[i])
		{
			output = 0;
			break;
		}
	}
	if (output == 0)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}