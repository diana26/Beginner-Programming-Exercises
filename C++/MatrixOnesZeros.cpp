
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


int main() {
	int matrix[4][4];
	int x;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> x;
			matrix[i][j] = x;
		}
	}
	vector<int> aux1, aux2;

	

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 4; j++) {
			if (matrix[i][j] == 0) {
				aux1.push_back(0);
				//aux2[i] = 0;
			}
			else {
				aux1.push_back(1);
			}
			
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 1; j++) {
			if (matrix[i][j] == 0) {
				aux2.push_back(0);
				//aux2[i] = 0;
			}
			else {
				aux2.push_back(1);
			}

		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 1; j++) {
			if (aux2[j] == 0) {
				matrix[i][j] = 0;
			}

		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	/*for (int i = 0; i < 4; i++) {
		cout << aux1[i] << " ";
	}
	for (int i = 0; i < 3; i++) {
		cout << aux2[i] << " ";
	}*/

	return 0;

}
