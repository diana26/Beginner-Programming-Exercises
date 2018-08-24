
#include <map>
#include <set>
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
#include <unordered_set>
#include <utility>

using namespace std;

struct Node {
	int data;
	Node *left = NULL, *right = NULL;
	Node(int data) {
		this->data = data;
	}
};

bool isBST(Node *node, int min, int max) {
	if (!node)
		return true;
	if (node->data < min || node->data > max)
		return false;
	return isBST(node->left, min, node->data - 1) && isBST(node->right, node->data + 1, max);
	
}


int main() {
	Node *root = new Node(18);
	root->left = new Node(15);
	root->right = new Node(22);
	root->left->left = new Node(13);
	root->right->right = new Node(24);
	cout << isBST(root, INT_MIN + 5, INT_MAX - 5);
	return 0;
}
