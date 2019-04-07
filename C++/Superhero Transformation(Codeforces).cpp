#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <functional>
#include <queue>
#include <bitset>
#include <sstream>
#include <set>
#include <iomanip>
#include <string.h>
#include <unordered_map>
#include <unordered_set>
#include <limits.h>
#include <iterator>
#include <complex>
#include <utility>

using namespace std;

set<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
set<char> consonants = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p','q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
bool isVowel(char c) {
	set<char>:: iterator it = vowels.find(c);
	if (it != vowels.end())
		return true;
	return false;
}

bool isConsonant(char c) {
	set<char>::iterator it = consonants.find(c);
	if (it != consonants.end())
		return true;
	return false;
}

string Solution(string s, string t) {
	if (s.size() == 0 || t.size() == 0)
		return "NO";
	int Lsize;
	bool ans = true;
	if (s.size() <= t.size())
		Lsize = s.size();
	else
		Lsize = t.size();
	for (int i = 0; i < Lsize; i++) {
		if (isVowel(s[i]) == true && isVowel(t[i]) == false || isVowel(t[i]) == true && isVowel(s[i]) == false)
			ans = false;
		else if (isConsonant(s[i]) == true && isConsonant(t[i]) == false || isConsonant(t[i]) == true && isConsonant(s[i]) == false)
			ans = false;
	}
	//cout << ans << endl;
	if (ans)
		return "YES";
	return "NO";
}

int main() {
	string s, t;
	cin >> s >> t;
	cout << Solution(s, t);
	return 0;
}
