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
struct Node {
	int val;
	struct Node* left, *right;
	Node(int data)
	{
		this->val = data;
		left = right = NULL;
	}
};
map<int, int>mapa;
map<int, Node>mapa2;

void ReadMap(Node *node1, Node *parent) {
	if (node1 != NULL) {
		if (parent != NULL) {
			mapa.insert(node1->val, 1 + mapa[parent->val]);
		}
		else if (parent == NULL)
			mapa.insert(node1->val, 0);
		ReadMap(node1->left, node1);
		ReadMap(node1->right, node1);
	}
}

void isCousins(Node *root, int x, int y) {
	ReadMap(root, NULL);
}


void PrintMap() {
	for (auto it : mapa) {
		cout << it.first << " " << it.second << endl;
	}
}
int main() {
	struct Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->right->right = new Node(5);
	isCousins(root, 4, 5);
	return 0;
}

