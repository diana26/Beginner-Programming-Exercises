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

using namespace std;

int main()
{
	long long n, count = 0;
	cin >> n;
	while (n)
	{
		long long digito = n % 10;
		n /= 10;
		if (digito == 4 || digito == 7)
		{
			count++;
		}

	}
	if (count == 4 || count == 7)
		cout << "YES";
	else
		cout << "NO";
return 0;
}