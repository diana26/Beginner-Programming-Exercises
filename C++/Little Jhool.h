#include <iostream>
#include<string>
#include <algorithm>
#include <cstddef>
#include <vector>

using namespace std;
//Find If the binary number written by the person has six consecutive 
// 0's or 1's his future is bad: print "Sorry,sorry!"
// Otherwise, he says that their future is good: print: "Good luck!".

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i + 6 < s.size(); i++)
	{
		if (s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3] && s[i] == s[i + 4] && s[i] == s[i + 5])
		{
			cout << "Sorry, sorry!";
			return 0;
		}
			
	}
		cout << "Good luck!";
		return 0;
}
