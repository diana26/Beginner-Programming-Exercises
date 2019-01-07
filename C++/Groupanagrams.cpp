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
map<string, multiset<string>> m;

//----------------------------------------------------------------------------------------------------------------------
string SortString(string s) {
	string str;
	int arr[26] = { 0 };
	for (int i = 0; i < s.length(); i++) {
		arr[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < arr[i]; j++) {
			str += (char)('a' + i);
		}
	}
	return str;
}
vector<vector<string>> GroupAnagrams(vector<string>strs) {
	for (string s : strs) {
		string st = SortString(s);
		m[st].insert(s);
	}
	vector<vector<string>>ans;
	for (auto mp : m) {
		vector<string> anagram(mp.second.begin(), mp.second.end());
		ans.push_back(anagram);
	}
	return ans;
}



//----------------------------------------------------------------------------------------------------------------------
int main() {
	vector<string>vect =  {"eat", "tea", "tan", "ate", "nat", "bat"};
	vector<vector<string>> ans = GroupAnagrams(vect);
	cout << ans.size();
	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << ans[i][j] << " ";
		}
	}*/
	return 0;
}

//======================================================================================================================