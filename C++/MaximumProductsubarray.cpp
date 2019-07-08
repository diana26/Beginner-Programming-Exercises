#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <map>
#include <istream>
#include <iostream>
#include <fstream>  
#include <math.h>
#include <algorithm>

using namespace std;

int maxProduct(vector<int>& nums) {
	if (nums.size() == 0) return 0;
	if (nums.size() == 1) return nums[0];

	vector<int>dpOne(nums.size());
	vector<int>dpTwo(nums.size());
	dpOne[0] = nums[0];
	dpTwo[0] = nums[0];

	for (int i = 1; i < nums.size(); i++) {
		dpOne[i] = max(max(dpOne[i - 1] * nums[i], nums[i]), dpTwo[i - 1] * nums[i]);
		dpTwo[i] = min(min(dpOne[i - 1] * nums[i], nums[i]), dpTwo[i - 1] * nums[i]);
	}
	return *max_element(dpOne.begin(), dpOne.end());

}

int main() {
	vector<int>v = { 2,3,-2,4 };
	int ans = maxProduct(v);
	cout << ans;
	return 0;
}