#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool Anagrams(string s1, string s2) {
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	return s1 == s2;
}

int main() {
	
	for(int i = 0; i <= T; i++)
	{	
	
	string s1, s2;
	cin >> s1 >> s2;
	if (Anagrams(s1, s2))
		cout << "Are anagrams." << endl;
	else
		cout << "Are not anagrams." << endl;
}
	return 0;
}