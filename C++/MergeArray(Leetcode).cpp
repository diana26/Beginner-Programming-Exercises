#include <map>
#include <set>
#include <unordered_set>
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
#include <utility>
//#include <bits/stdc++>

typedef long long ll;
using namespace std;

void Merge(vector<int> arrN, vector<int> arrM, int i, int j) {
	int current = arrN.size() - 1;
	while (i >= 0 || j >= 0) {
		if (arrN[i] > arrM[j]) {
			arrN[current] = arrN[i];
			i--; 
		}
		else if (arrM[j] > arrN[i]) {
			arrM[current] = arrM[i];
			j--;
		}
		current--;
		
	}
	
		while (j > 0) {
			arrN[current] = arrM[j];
			j--;
			current--;
		}
		for (int i = 0; i < arrN.size(); i++) {
			cout << arrN[i];
	}
}

	int main() {
		vector<int>one = { 1,2,3,0,0,0 };
		vector<int>two = { 2,5,6 };
		Merge(one, two, 3, 3);
		return 0;
}





