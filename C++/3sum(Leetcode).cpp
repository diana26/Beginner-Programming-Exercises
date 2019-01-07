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
set<int>s;

//----------------------------------------------------------------------------------------------------------------------
vector<vector<int>> threeSum(vector<int>nums) {
	sort(nums.begin(), nums.end());
	vector<vector<int>> ans;
	for (int i = 0; i < nums.size(); i++) {
		if (i > 0 && nums[i] == nums[i - 1]) {
			continue; 
		}
		if (nums[i] > 0) {
			break; 
		}
		int l = i + 1, r = nums.size() - 1;
		while (l < r) {
			if (nums[l] + nums[i] + nums[r] == 0) {
				vector<int> temp({ nums[i], nums[l], nums[r] });
				ans.push_back(temp);
				l += 1;
				while (l < nums.size() && (nums[l] + nums[r] + nums[i]) == 0) {
					l += 1; 
				}
			}
			else if (nums[l] + nums[i] + nums[r] > 0) {
				r--;
			}
			else if (nums[l] + nums[i] + nums[r] < 0) {
				l++;
			}
			
		}
	}
	for (int i = 0; i < ans.size(); i++) {

	}
	return ans;
}



//----------------------------------------------------------------------------------------------------------------------
int main() {
	vector<int>v = { -1, 0, 1, 2, -1, -4};
	vector<vector<int>> ans = threeSum(v);
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < 3; j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

//======================================================================================================================