
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

map<int, int> Mymap;
int Frequence(vector<int>Array, int K) {
	int count = 0;
	for (int i = 0; i < Array.size(); i++) {
		if (Mymap.find(Array[i]) != Mymap.end()) {
			count++;
			Mymap.insert(pair <int, int>(Array[i], count));
	}
		return 
	
}
int main()
{
	vector<int>Array;
	int K;
	cin >> K;
	for (int i = 0; i <= K; i++) {
		Array.push_back(i);
	}
	cout << Frequence(Array, K);

	return 0;
}


