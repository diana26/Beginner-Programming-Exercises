
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
int perfect(int x){
	int answer = 0;
	while (x)
	{
		answer += x % 10;
		x /= 10;
	}
	return answer;
}
int  n;
int main()
{
	cin >> n;
	int ans = 0;
	while (n)
	{
		ans++;
		if (perfect(ans) == 10)
		{
			n--;
		}
		
	}
	cout << ans;
	return 0;
}

