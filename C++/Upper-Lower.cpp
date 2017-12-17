#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
int main()
{
	
	char str [100];
	int size = strlen(str);
	cin >> str;
	for (int i = 0; i <= size; i++) 
	{
		if  (str[i] >= 65 && str[i] <= 92)
		{
			str[i] = str[i] + 32;
		}
		else if (str[i] >= 97 && str[i] <= 124)
		{
			str[i] = str[i] - 32;
		}
	}
	cout << str;
	return 0;
}