﻿
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
#include <unordered_set>
#include <utility>

using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
ll Array[N];
int main()
{
	ll n, K;
	long long ans, minimun, champ;
	long long maxi = LONG_MAX;
	cin >> n >> K;
	
	for (int i = 1; i <= K; i++)
	{
		cin >> Array[i];
	}
	for (int i = 1; i <= K; i++)
	{
		maxi = min(maxi, n%Array[i]);
	}
	for (int i = 1; i <= K; i++)
	{
		if (n%Array[i] == maxi)
			ans = i;
	}
	cout << ans << " " << n / Array[ans];
	return 0;
}


