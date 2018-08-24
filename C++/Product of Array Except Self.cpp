
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

vector<int> Result(vector<int> MyVect) {
	vector<int> Aux;
	int x = 1, aux;
	for (int i = 0; i < MyVect.size(); i++) {
		x = x * MyVect[i];
	}
	for (int i = 0; i < MyVect.size(); i++) {
		if (MyVect[i] != 0) {
			aux = x / MyVect[i];
			Aux.push_back(aux);
		}
		else
			Aux.push_back(0);
	}
	return Aux;
}

int main() {
	vector<int> MyVect = { 0, 2, 5, 4 };
	vector<int>MyAns = Result(MyVect);
	for (int i = 0; i < MyAns.size(); i++) {
		cout << MyAns[i] << " ";
	}
	
	return 0;
}

