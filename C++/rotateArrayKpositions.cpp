#include <iostream>
#include <string>
#include <sstream>
#include <deque>
#include <vector>
#include <map>
#include <istream>
#include <iostream>
#include <fstream>  
#include <math.h>
#include <algorithm>

using namespace std;

vector<int> rotateKpositions(vector<int>&v, int K) {
	int x = K - 1;
	reverse(v.begin(), v.begin() + x);
	reverse(v.begin() + K, v.end());
	reverse(v.begin(), v.end());
	return v;
}

int main() {
	vector<int>v = { 1,2,3,4,5,6 };
	vector<int>ans = rotateKpositions(v, 4);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	return 0;
}