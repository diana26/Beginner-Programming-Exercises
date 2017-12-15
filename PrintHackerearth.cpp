#include <iostream>
#include<string>
#include <algorithm>
#include <cstddef>
#include <vector>

using namespace std;

int main()
{
	int N, count = 0;
	int Array[7] = { 0 };
	string Str;
	cin >> N >> Str;
	if (N<11)
	{
		cout << "0";
	}
	else
	{
		for (int i = 0; i<N; i++)
		{
			if (Str[i] == 'h')
			{
				Array[0]++;
			}
			else if (Str[i] == 'a')
			{
				Array[1]++;
			}
			else if (Str[i] == 'c')
			{
				Array[2]++;
			}
			else if (Str[i] == 'k')
			{
				Array[3]++;
			}
			else if (Str[i] == 'e')
			{
				Array[4]++;
			}
			else if (Str[i] == 'r')
			{
				Array[5]++;
			}
			else if (Str[i] == 't')
			{
				Array[6]++;
			}
		}
		Array[0] = Array[0] / 2;
		Array[1] = Array[1] / 2;
		Array[4] = Array[4] / 2;
		Array[5] = Array[5] / 2;
		count = Array[0];
		for (int i = 0; i<7; i++)
		{
			if (count>Array[i])
			{
				count = Array[i];
			}
		}
		cout << count << endl;
	}
	return 0;
}