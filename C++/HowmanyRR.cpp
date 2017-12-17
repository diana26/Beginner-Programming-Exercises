#include <iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int times = 0;
	cin >> str;
	for (int i = 0; i< str.length(); i++)

	{
		if (str[i] == 'r' && str[i + 1] == 'r')
			times++;
	}
	cout << times << endl;
	return 0;
}
