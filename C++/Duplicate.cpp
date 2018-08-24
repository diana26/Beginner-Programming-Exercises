
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

void DuplicateElement(vector<int> MyVect) {
	int n = MyVect.size() -1;
	int aux = 0, aux2 = 0;
	for (int i = 1; i <= n; i++) {
		aux = aux + i;
	}
	for (int i = 0; i < MyVect.size(); i++) {
		aux2 = aux2 + MyVect[i];
	}
	cout << aux2 - aux;
}

int main() {
	vector<int> vec = { 2, 1, 3, 2, 4, 5 };
	DuplicateElement(vec);
	
	return 0;

}
