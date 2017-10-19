#include <iostream>
#include<string>
using namespace std;

int main()
{
	int Array[10], temp, n, i, j;
	cout << "Enter the number of elements of your array:";
	cin >> n;
	for (i = 1; i <= n; i++) {
		cout << "Element:" << " ";
		cin >> Array[i];
	}
	for (j = 0; j<n; j++)
		for (i = j + 1; i<n; i++) {
			if (Array[j] < Array[i]) {
				temp = Array[j];
				Array[j] = Array[i];
				Array[i] = temp;
			}
		}
	cout << "In ascending order:";
	for (i = 1; i <= n; i++) {
		cout << Array[i];
	}
	return 0;
}