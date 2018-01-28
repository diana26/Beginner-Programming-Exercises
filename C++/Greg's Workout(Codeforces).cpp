
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
	int n, Array[10000] = {}, count1=0, count2=0,count3=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}
	for (int i = 0; i < n; i = i + 3)
	{
		count1 = count1 + Array[i];
	}
	for (int i = 1; i < n; i = i + 3)
	{
		count2 = count2 + Array[i];
	}
	for (int i = 2; i < n; i = i + 3)
	{
		count3 = count3 + Array[i];
	}

	if (count1 > count2 && count1 > count3)
		cout << "chest";
	else if (count2 > count1 && count2 > count3)
		cout << "biceps";
	else if (count3 > count1 && count3 > count2)
		cout << "back";
	return 0;
}