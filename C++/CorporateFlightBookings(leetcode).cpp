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

vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
	map<int, int>m;
	vector<int>ans;
	bool flag = false;
	for (int i = 0; i < bookings.size(); i++) {
		for (int j = 1; j <= bookings[i][1]; j++) {
			if (count(bookings[i].begin(), bookings[i].end(), j) || flag) {
				m[j] += bookings[i][2];
				flag = true;
			}
			else {
				
					m[j] += 0;
			}
				
			
		}
		flag = false;
	}
	for (auto it : m) {
		ans.push_back(it.second);
	}
	int x = n - m.size(), k = 0;
	while (x > 0) {
		ans.push_back(k);
		x--;
	}
	return ans;
}

int main() {
	int n; 
	cin >> n;
	vector<vector<int>> v = { {1,5,45}, {1,2,50}, {4,4,50}, {1,1,25},{3,6,25},{6,6,5} };
	vector<int> ans = corpFlightBookings(v, n);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	return 0;
}