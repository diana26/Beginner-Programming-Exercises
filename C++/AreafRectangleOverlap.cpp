
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
struct Points
{
	int x; 
	int y;
};

int distance(int dx1, int dy1, int dx2, int dy2)
{
	return (min(dy1, dy2)) - (max(dx1, dx2));
}

int main()
{
	int answer;
	Points one = {}, two = {}, tree = {}, four = {};
		cin >> one.x >> one.y;
		cin >> two.x >> two.y;
		cin >> tree.x >> tree.y;
		cin >> four.x >> four.y;
		answer = distance(one.x, two.x, tree.x, four.x) * distance(one.y, two.y, tree.y, four.y);
		if (answer == 0)
			cout << "not overloapping";
		else
			cout << answer;
	return 0;
}

