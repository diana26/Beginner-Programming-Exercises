
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

int main()
{
	long long N, K;
	
	long long ans, minimun, champ;
	long long maxi = LONG_MAX;
	cin >> N >> K;
	vector<long long>Array(K);
	for (int i = 1; i <= K; i++)
	{
		cin >> i;
		Array.push_back(i);
	}
	for (int i = 1; i <= K; i++)
	{
		maxi = min(maxi, N%Array[i]);
	}
	for (int i = 1; i <= K; i++)
	{
		if (N%Array[i] == maxi)
			ans = i;
	}
	cout << ans << " " << N / Array[ans];
	return 0;
}

