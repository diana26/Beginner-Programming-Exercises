#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <functional>
#include <queue>
#include <bitset>
#include <sstream>
#include <set>
#include <iomanip>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <limits.h>
#include <iterator>
#include <complex>
//#include <assert>
#include <thread>

#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif

using namespace std;

//                                          //AUTHOR: Hugo Garcia

//======================================================================================================================

#define FOR(i, a, b) for(ll i=ll(a); i<ll(b); i++)
#define ROF(i, a, b) for(ll i=ll(a); i>=ll(b); i--)
#define pb push_back
#define mp make_pair
#define lld I64d
#define all(a) (a).begin(), (a).end()
#define ifile(a) freopen((a), "r", stdin)
#define ofile(a) freopen((a), "w", stdout)
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define PI 3.1415926535897932384626433832795
#define mem(x, val) memset((x), (val), sizeof(x))
#define sz(x) (ll)(x).size()
#define endl '\n'
#define clockon int t = 1; while (t--) { clock_t z = clock();
#define clockoff debug("Elapsed Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC); }
#define oo 2000000000000000000LL
#define EPS 1e-6

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

#define MOD 1000000007
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

vector<int> bfs(int n, int m, int i) {
	queue<int> q;
	q.push(i);
	int step;
	vector<int>ans;
	while (!q.empty()) {
		step = q.front();
		q.pop();
		if (step <= m && step >= n) {
			ans.push_back(step);
		}
		if (i == 0 || step > m)
			continue;
		int last = step % 10;
		int step1 = step * 10 + (last + 1);
		int step2 = step * 10 + (last - 1);
		//cout << step1 << " " << step2 << endl;
		if (last == 0)
			q.push(step1);
		else if (last == 9)
			q.push(step2);
		else {
			q.push(step1);
			q.push(step2);
		}
	}
	return ans;
}

vector<int> Solution(int n, int m) {
	vector<int>ans;
	for (int i = 0; i <= 9; i++) {
		bfs(n, m, i);
	}
	return ans;
}

int main() {
	vector<int>v = Solution(11, 20);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	return 0;
}


//======================================================================================================================