﻿ #include <map> #include <set> #include <unordered_set> #include <list> #include <cmath> #include <ctime> #include <deque> #include <queue> #include <stack> #include <string> #include <bitset> #include <cstdio> #include <climits> #include <vector> #include <climits> #include <cstring> #include <cstdlib> #include <fstream> #include <numeric> #include <sstream> #include <iostream> #include <algorithm> #include <unordered_map> #include <utility>  using namespace std; stack<int> bits; int find_bit(int x) {  	if (x == 1) {  		bits.push(x);  		return 1;  	}  	else {  		bits.push(x % 2);  		return find_bit(x / 2);  	}  }  int main() { 	int b; 	cin >> b; 	find_bit(b);  	while (!bits.empty())  	{  		cout << bits.top();  		bits.pop();  	}  	return 0;  }      