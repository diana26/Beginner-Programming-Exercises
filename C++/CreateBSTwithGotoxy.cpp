#include <stdio.h> 
#include <iostream>
#include <vector>
#include<string>
#include<Windows.h>
#include<math.h>

using namespace std;
int x = 0, y = 0;
void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

struct Node {
	int val;
	Node *left;
	Node *right;
}; struct Node *root = NULL;

void pushNode(int x) {
	Node *newNode = new Node;
	newNode->val = x;
	newNode->left = NULL;
	newNode->right = NULL;
	if (root == NULL)
		root = newNode;
	else {
		Node *prev, *next;
		prev = NULL, next = root;
		while (next != NULL) {
			prev = next;
			if (x < next->val)
				next = next->left;
			else
				next = next->right;
		}
		if (x < prev->val)
			prev->left = newNode;
		else
			prev->right = newNode;
	}
}

void printingNodes(Node *root, int x, int y) {
	if (root != NULL) {
		gotoxy(x, y);
		cout << root->val << " ";
		printingNodes(root->left, x - 20, y + 3);
		printingNodes(root->right, x + 20, y + 3);
	}
}

bool checkBST(Node *n, int min, int max) {
	if (n == NULL) return true;
	if ((min != INT_MIN && n->val < min) || (max != INT_MAX && n->val > max))
		return false;
	if (!(checkBST(n->left, min, n->val)) || !(checkBST(n->right, n->val, max)))
		return false;
	return true;
}

bool aux(Node *n) {
	return checkBST(n, INT_MIN, INT_MAX);
}


int main() {
	pushNode(100);
	pushNode(50);
	pushNode(25);
	pushNode(75);
	pushNode(150);
	pushNode(120);
	pushNode(160);
	printingNodes(root, 40, 0);
	cout << aux(root);
	return 0;

}