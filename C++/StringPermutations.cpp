#include <iostream>
#include <string>
#include <sstream>
#include <deque>
#include <vector>
#include <map>
#include <istream>
#include <iostream>
#include <fstream>  
#include <math.h>
#include <algorithm>

using namespace std;

void permute(string s, int l, int r) {
	if (l == r)
		cout << s << endl;
	else {

		for (int i = l; i <= r; i++) {
			swap(s[l], s[i]);
			permute(s, l + 1, r);
			swap(s[l], s[i]);
		}
	}
}


int main() {
	string s = "ABC";
	permute(s, 0, s.length() - 1);
 	return 0;
}