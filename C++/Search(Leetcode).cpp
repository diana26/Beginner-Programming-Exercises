
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

int BinarySearch(vector<int>myVect, int n, int x) {
	int start = 0;
	int end = n - 1;

	if (myVect[start] > x) {
		return start;
	}
	else if (myVect[end] < x) {
		return myVect.size();
	}
	else {
		while (start <= end)
		{
			int mid = ((end - start) << 1) + start;
			if (myVect[mid] == x)
				return mid;
			if (myVect[mid] > x) {
				end = mid - 1;
				return mid;
			}
			else {
				start = mid + 1;
				return mid;
			}
		}
	}
	return -1;
}

int main()
{
	vector<int> myVect = { 1, 3, 5, 9, 10 };
	int n = myVect.size() - 1;
	int x = 11;
	//long long  Array[1000];
	/*int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}*/
	int result = BinarySearch(myVect, n, x);
	if (result == -1)
		cout << "It is not in the list";
	else
		cout << result;
	return 0;
}

