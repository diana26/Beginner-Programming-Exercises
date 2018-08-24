
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


int MaxSumOfArray(vector<int> MyVect) {
	int max = 0;
	int max_sum = 0;
	for (int i = 0; i < MyVect.size(); i++) {
		max_sum = max_sum + MyVect[i];
		if (max_sum < 0)
			max_sum = 0;
		if (max < max_sum)
			max = max_sum;
		
	}
	return max;
}

int main() {
	vector<int> ans = { -2, -3, 4, -1, -2, 1, 5, -3 };
	cout << MaxSumOfArray(ans);
	return 0;

}
