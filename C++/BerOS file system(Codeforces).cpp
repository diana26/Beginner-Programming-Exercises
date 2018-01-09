
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <climits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
	string str, aux = "";
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (aux.length() > 0 && str[i] == '/' && aux[aux.length() - 1] == '/')
			continue;
		else
			aux += str[i];

	}
	if (aux.length() > 1 && aux[aux.length() - 1] == '/')
	aux = aux.substr(0, aux.length() - 1);
	
	cout << aux << endl;
	return 0;
}