
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
#include <utility>

using namespace std;

string isPalindrome(string str) {
	string answer;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != str[str.length() -i- 1])
		{
			answer = "NO";
				break;
		}
		else
			answer = "YES";
	}
	return answer;
}

int main()
{
	string s ;
	cin >> s;
	cout << isPalindrome(s);
	return 0;
}

