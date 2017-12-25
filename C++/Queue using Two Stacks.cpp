#include <iostream>
#include <string>
#include <algorithm>
#include <cstddef>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int q,x;
	cin >> q;
	queue<int> que;
	while (q--)
	{
		cin >> x;
		if (x == 1)
		{
			cin >> x; 
			que.push(x);
		}
		else if (x == 2)
		{
			que.pop();
		}
		else 
		{
			cout << que.front() << endl;
		}
	}
	return 0;
}