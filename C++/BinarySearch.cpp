
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



int BinarySearch(long long A[1000], int n, int x) {
	int start = 0;
	int end = n-1;
	while (start <= end)
	{
		int mid = start + end / 2;
		if (x == A[mid])
			return x;
		else if (x > A[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return -1;
}

int main()
{
	long long  Array[1000];
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}
	int result = BinarySearch(Array, n, x);
	if (result == -1)
		cout << "It is not in the list";
	else
		cout << "Yes, it is in the list, in the position:";
	return 0;
}

