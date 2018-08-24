
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
	Node *left;
	Node *right;
	int value;
};

struct Node *tail = NULL;

Node *addNode(int x) {
	Node *newNode = new Node;
	newNode->value = x;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

/*void printPre(struct Node *reco) {
	if (reco != NULL) {
		printf("%i-", reco->value);
		printPre(reco->left);
		printPre(reco->right);
	}
}*/

void FullNodes(Node *root) {
	if (root != NULL) {
		FullNodes(root->left);
		if (root->left != NULL && root->right != NULL)
			cout << root->value << " ";
		FullNodes(root->right);
	}
}

int main() {

	Node *root = addNode(1);
	root->left = addNode(2);
	root->right = addNode(3);
	root->left->left = addNode(4);
	root->right->left = addNode(5);
	root->right->right = addNode(6);
	root->right->left->right = addNode(7);
	root->right->right->right = addNode(8);
	root->right->left->right->left = addNode(9);
	//printPre(root);
	FullNodes(root);
	
	return 0;

}
