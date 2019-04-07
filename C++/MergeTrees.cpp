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

typedef pair<int, int> pii;

using namespace std;

struct Node{
	int val;
	Node *left;
	Node *right;
};

Node* mergeTrees(Node* t1, Node* t2) {
	int aux;
	if (t1 == NULL && t2 == NULL)
		return NULL;
	else if (t1 != NULL && t2 == NULL)
		return t1;
	else if (t2 != NULL && t1 == NULL)
		return t2;

	else {
		aux = t1->val + t2->val;
		t1->val = aux;
		t1->left = mergeTrees(t1->left, t2->left);
		t1->right = mergeTrees(t1->right, t2->right);
	}
	return t1;
}

int main() {
	
	return 0;
}



