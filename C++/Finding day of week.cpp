
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
long long Array[100000000];
int main() {
	int T, count, answer;
	long long K;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> K;
		count = 0;
		answer = 0;
		for (int i = 0; i < 7; i++)
		{
			cin >> Array[i];
		}
		for (int i = 0; i < 7; i++)
		{
			if (Array[i] > 0)
			{
				count++;
				answer = count;
			}
			else
				count++;
		}
		if (answer == 1)
			cout << "MONDAY" << endl;
		else if (answer == 2)
			cout << "TUESDAY" << endl;
		else if (answer == 3)
			cout << "WEDNESDAY" << endl;
		else if (answer == 4)
			cout << "THURSDAY" << endl;
		else if (answer == 5)
			cout << "FRIDAY" << endl;
		else if (answer == 6)
			cout << "SATURDAY" << endl;
		else if (answe == 7)
			cout << "SUNDAY" << endl;
		
}
	
	return 0;
}