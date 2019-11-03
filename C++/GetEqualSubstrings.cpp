#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <istream>
#include <iostream>
#include <fstream>  
#include <math.h>
#include <algorithm>

using namespace std;

string removeDuplicates(string &s, int k) {
	int p = 0, q = 1, count = 0;
	while (s.length() > k) {
		if (s[p] == s[q]) {
			q++;
			count++;
			if (count == (k - 1)) {
				s.erase(p, (q - p));
				p = 0, q = 1;
				count = 0;
			}
		}
		else {
			p = q;
			q++;
		}
	}
	
	return s;
}

int main() {
	string s = "deeedbbcccbdaa";
	cout << removeDuplicates(s, 3);
	return 0;
}