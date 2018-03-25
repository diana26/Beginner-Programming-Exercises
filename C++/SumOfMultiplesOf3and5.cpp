
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

long long findBoth(int x, int y, long long N) {
	long long m = N / x;
	long long sum = m * (m + 1) / 2;
	long long ans = x * sum;
	long long m1 = N / y;
	long long sum1 = m1 * (m1 + 1) / 2;
	long long ans1 = y * sum1;
	long long m2 = N / (3 * 5);
	long long sumBoth = m2 * (m2 + 1) / 2;
	long long ansBoth = (x*y) * sumBoth;
	long long answer = (ans + ans1) - ansBoth;
	return answer;
}

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		long long N;
		cin >> N;
		cout << findBoth(3, 5, N - 1);
	}
	return 0;
}


