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
#include <utility>

using namespace std;
typedef pair<int, int> pii;

bool auxiliar(Node *p, Node* q) {
	if (p == NULL && q == NULL)
		return true;
	if ((p == NULL || q == NULL) || p->val != q->val)
		return false;
	return auxiliar(p->left, q->left) &&
		auxiliar(p->right, q->right);
}

bool isSameTree(Node* p, Node* q) {
	return auxiliar(p, q);
}

int main() {
	
	return 0;
}


