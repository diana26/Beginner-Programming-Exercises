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

int kthSmallest(int arr[], int r, int l, int k) {
	if (k > 0 && k <= r - l + 1) {
		int pos = auxiliarFunc(arr, r, l);
		if (pos == k)
			return arr[pos];
		else if (pos > k) {
			return kthSmallest(arr, l, pos + 1, k);
		}
		else
			return kthSmallest(arr, pos + 1, r, k);
	}
	return INT_MAX;
}

int auxiliarFunc(int arr[], int r, int l) {
	int x = arr[r], i = l;
	for (int j = l; j <= r - 1; j++) {
		if (arr[j] <= arr[i]) {
			swap(arr[j], arr[i]);
			i++;
		}
	}
	swap(arr[i], arr[r]);
	return i;
}

int main() {
	int arr[] = { 12, 3, 5, 7, 4, 19, 26 };
	int n = sizeof(arr) / sizeof(arr[0]), k = 3;
	cout << "K'th smallest element is " << kthSmallest(arr, 0, n - 1, k);
	return 0;
}


//======================================================================================================================