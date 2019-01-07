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
#include <string.h>
#include <unordered_map>
#include <unordered_set>
#include <limits.h>
#include <iterator>
#include <complex>

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
set<int>s1;

//----------------------------------------------------------------------------------------------------------------------
int LengthofSubs(string s) {
	int ans = INT_MIN;
	int p1 = 0;
	if (s.length() <= 0)
		return 0;
	else if (s.length() == 1)
		return 1;
	else {
		for (int i = 1; i < s.length(); i++) {
			if (s1.empty())
				s1.insert(s[p1]);
			if (s1.find(s[i]) != s1.end()) {
				ans = max(ans, (i  - p1));
				p1 = i - 1;
				s1.clear();
			}
			else {
				s1.insert(s[i]);				
			}
			ans = max(ans, ((i +1) - p1));
		}
		
	}
	return ans;
}



//----------------------------------------------------------------------------------------------------------------------
int main() {
	string s = "abcabcbb";
	cout << LengthofSubs(s);
	return 0;
}

//======================================================================================================================