
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
	Node *next;
	int value;
};

void push(struct Node** head, int x) {
	struct Node * node = new Node;
	node->value = x;
	node->next = *head;
	*head = node;
}

void print(Node * head) {
	while (head) {
		cout << head->value;
		head = head->next;
	}
}

Node * SumTwoLinkedList(Node *a, Node *b) {
	Node *head = new Node();
	Node *aux = head;
	int answer = 0, carry = 0;
	while (a || b) {
		
		answer = (a ? a->value : 0) + (b ? b->value : 0) + carry;
		Node *aux2 = new Node();
		aux2->value = answer % 10;
		aux->next = aux2;
		aux = aux2;
		if (answer >= 10) {
			carry = 1;
		}
		else
			carry = 0;
		a = a->next;
		b = b->next;
		cout << aux->value << " ";
	}
	if (carry) {
		aux->next = new Node();
		aux->next->value = 1;
	}
	
	head = head->next;
	return head;
}

int main() {
	struct Node *head = NULL;
	struct Node *head2 = NULL;
	{

	};
	push(&head, 2);
	push(&head, 7);
	push(&head, 3);
	push(&head2, 1);
	push(&head2, 4);
	push(&head2, 6);
	SumTwoLinkedList(head, head2);
	return 0;
}
