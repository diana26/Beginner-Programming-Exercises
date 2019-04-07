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

Node* searchBST(Node* root, int val) {
	if (root == NULL)
		return NULL;
	if (root->val == val)
		return root;
	else {
		if (root->val > val)
			return searchBST(root->left, val);
		else
			return searchBST(root->right, val);
	}
}

int main() {
	
	return 0;
}



