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
struct Node {
	Node *next;
	char value;
	Node(char s) {
		this->value = s;
	}
};

//----------------------------------------------------------------------------------------------------------------------
void InsertElement(Node ** root, char x) {
	Node *n = new Node(x);
	n->next = *root;
	*root = n;
}

void PrintElements(Node ** root) {
	while (root) {
		cout << root->value << " ";
		root = root->next;
	}
}

int removeAccelerator(Node *root) {
	int count = 0;
	if (root == NULL) {
		return -1;
	}
	Node *aux = root;

	/*while (aux->next != NULL && aux->next->value != '&') {
		aux = aux->next;
	}
	if (aux->next == NULL) {
		return -1;
	}
	aux->next = aux->next->next;
	while(aux != NULL) {
		/*if (aux->value != 'a' || aux->value != 'i' || aux->value != 'E') {
			count++;
			break;
		}
		cout << aux->value << "->";
		aux = aux->next;
	}*/

	if (aux->next->next != NULL && aux->next->value == '&') {
		Node *temp = aux;
		aux = aux->next->next;
		temp->next = NULL;
		count++;
	}

	if (aux->next->value == '&') {
		aux->next = NULL;
	}
	
	return count;
}

//----------------------------------------------------------------------------------------------------------------------
int main() {
	struct Node *root = NULL;
	InsertElement(&root, 'p');
	InsertElement(&root, 'r');
	InsertElement(&root, '&');
	InsertElement(&root, 'i');
	InsertElement(&root, 'n');
	InsertElement(&root, 't');
	cout << removeAccelerator(root);
	PrintElements(&root);
	return 0;
}

//======================================================================================================================