#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <map>
#include <istream>
#include <iostream>
#include <fstream>  
#include <math.h>
#include <algorithm>

using namespace std;

void reverse(string &s, int start, int end) {
	if (start < end) {
		swap(s[start], s[end]);
		reverse(s, start + 1, end - 1);
	}
}

int main() {
	string s = "fernanda";
	reverse(s, 0, s.length() - 1);
	cout << s;
	return 0;
}