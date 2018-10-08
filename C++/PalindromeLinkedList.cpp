
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

stack<int> st;

struct Node {
	int value;
	Node *next;
};

void push(struct Node** head, int x) {
	struct Node * node = new Node;
	node->value = x;
	node->next = *head;
	*head = node;
}

bool isPalindrome(Node *head) {
	Node *aux = head;
	bool flag = true;
	while (aux) {
		st.push(aux->value);
		aux = aux->next;
	}
	while (head) {
		if (head->value == st.top()) {
			st.pop();
		}
		else {
			flag = false;
			break;
		}
		head = head->next;
	}
	return flag;
}

void fillStack(Node *head) {
	Node *aux = head;
	while (aux) {
		st.push(aux->value);
		aux = aux->next;
	}
}

void print(stack<int>st2) {
	while (!st2.empty()) {
		cout << st2.top() << endl;
		st2.pop();
	}
}

int main() {
	struct Node *head = NULL;
	push(&head, 10);
	push(&head, 2);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);
	cout << isPalindrome(head);
	//fillStack(head);
	//print(st);
	return 0;
}
