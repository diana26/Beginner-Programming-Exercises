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
//#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void answer(vector<int> nums) {
	
	int start = 0;
	int end = nums.size() - 1;

	while (start< nums.size() - 1 && nums[start] == 0) {
		++start;
	}

	while (end >= 0 && nums[end] == 2) {
		--end;
	}

	for (int i = start; i <= end; ++i) {
		if (nums[i] == 0) {
			if (nums[start] == 2) {
				swap(nums[i], nums[start]);
				swap(nums[i], nums[end]);
				++start;
				--end;
			}
			else if (nums[start] == 1) {
				swap(nums[i], nums[start]);
				++start;
			}
		}
		else if (nums[i] == 2) {
			while (i < end && nums[end] == 2)
				--end;
			if (nums[end] == 0) {
				swap(nums[i], nums[end]);
				swap(nums[i], nums[start]);
				++start;
				--end;
			}
			else if (nums[end] == 1) {
				swap(nums[i], nums[end]);
				--end;
			}

		}
	}
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
}

int main()
{
	vector<int> nums = { 1, 2, 0, 2, 1, 0 };
	answer(nums);
	return 0;
}






