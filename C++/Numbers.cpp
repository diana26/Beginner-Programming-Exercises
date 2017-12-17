#include <iostream>
#include<string>
using namespace std;

int main()
{
	string Array;

	int  zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;

	cin >> Array;

	for (int i = 0; i< Array.length(); i++) {
		if (Array[i] == '0')
			zero++;

		if (Array[i] == '1')
			one++;

		if (Array[i] == '2')
			two++;

		if (Array[i] == '3')
			three++;

		if (Array[i] == '4')
			four++;

		if (Array[i] == '5')
			five++;

		if (Array[i] == '6')
			six++;

		if (Array[i] == '7')
			seven++;

		if (Array[i] == '8')
			eight++;

		if (Array[i] == '9')
			nine++;

	}

	cout << "0" << " " << zero << endl;
	cout << "1" << " " << one << endl;
	cout << "2" << " " << two << endl;
	cout << "3" << " " << three << endl;
	cout << "4" << " " << four << endl;
	cout << "5" << " " << five << endl;
	cout << "6" << " " << six << endl;
	cout << "7" << " " << seven << endl;
	cout << "8" << " " << eight << endl;
	cout << "9" << " " << nine << endl;
	return 0;
}
