#include <iostream>
//#include <stdlib.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

# define M_PI           3.14159265358979323846 
using namespace std;
/*----------------------------------------------
*	Calcula el minimo valor de punto flotante
*   que aun sea significativo para sumarlo a 1.0
*----------------------------------------------*/

vector<int>v = { 1, 5, 7 };

/*void functionAux() {
	int x;
	try {
		cout << v.at(7);
	}
	catch (const std::exception& e) {
		cout << "Handling exception " << e.what();
		x = v.back();
		cout << x;
	}
}*/

int maxArea(vector<int>& height) {
	int maxi = 0, start = 0, end = height.size() - 1;
	while (start < end) {
		int aux = end - start;
		maxi = max(maxi, min(height[start], height[end]) * aux);
		if (height[start] < height[end])
			start++;
		else
			end--;
	}
	return maxi;
}

int main() {
	vector<int> v = { 1,8,6,2,5,4,8,3,7 };
	cout << maxArea(v);
	return 0;
}