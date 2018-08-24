
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

vector<int> answer(vector<int> MyVect) {
	vector<int> aux;
	vector<int> aux2;
	vector<int> result;
	int x = 1, y = 1;
	for (int i = 0; i < MyVect.size(); i++) {
		aux[i] = x;
		x *= MyVect[i];
	}

	for (int i = MyVect.size() - 1; i >= 0; i--) {
		aux2[i] = y;
		y *= MyVect[i];
		
	}

	for (int i = 0; i < MyVect.size(); i++) {
		result[i]  = (aux[i] * aux2[i]);
	}
	return result;
}

int main() {
	vector<int> myVect = { 1, 5, 3, 2 };
	vector<int> result = answer(myVect);
	
	for (int i = 0; i < myVect.size(); i++) {
		cout << result[i] << " ";
	}
	

	return 0;

}
