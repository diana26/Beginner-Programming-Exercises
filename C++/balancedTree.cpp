
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
	Node *next;
};


/*Node *node (int data) {
	Node *node = new Node;
	node->data = data;
	//node->left = NULL;
	//node->right = NULL;
	return node;
}*/

void push(struct Node** head, int x) {
	struct Node * node = new Node;
	node->data = x;
	node->next = *head;
	*head = node;
}

void print(struct Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

bool balanced;

bool ItCould(Node *root) {
	balanced = true;
	bal(root, balanced);
	return bal;
}

int bal(Node *node, balanced) {
	if (node == NULL)
		return 0;
	int left = bal(node->)
}

int main() {
	struct Node *head = NULL;
	push(&head, 4);
	push(&head, 10);
	push(&head, 6);
	push(&head, 14);
	push(&head, 24);
	//cout << getNthElement(head, 2);
	print(head);
	
	return 0;
}
