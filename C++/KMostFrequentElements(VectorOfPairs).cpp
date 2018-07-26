
#include <map>
#include <set>
#include <unordered_set>
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

typedef long long ll;
using namespace std;
map<ll, int> freq;
ll a[100005];
vector<pair <ll, int>>sortV;
bool sortbysecdesc(const pair<int, int> &a,
	const pair<int, int> &b)
{
	return a.second>b.second;
}

int main()
{
	ll n, temp = 0;
	cin >> n;
	ll k;
	cin >> k;
	for (ll i = 0; i < n; i++)
		cin >> a[i];

	for (ll i = 0; i < n; i++)
	{
		freq[a[i]]++;
	}

	for (auto it : freq)
	{
		cout << it.first << " " << it.second << endl;
		sortV.push_back(make_pair(it.first, it.second));
	}
	sort(sortV.begin(), sortV.end(), sortbysecdesc);

	for (ll i = 0; i < k; i++){
		cout << sortV[i].first << " " << sortV[i].second << " ";
	}
	return 0;
}

