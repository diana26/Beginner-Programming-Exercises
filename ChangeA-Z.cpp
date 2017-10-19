#include <iostream>
#include<string>
using namespace std;

int main()
{
	string Name;
	string LastName;
	string Complete = Name + LastName;
	cout << "Enter the name and lastname" << endl;
	cin>> Name >>  LastName;
	
	for (int i = 0; i <= Complete.length(); i++) {
		if (Complete[i] == 'a' ) {
			Complete[i] == 'z';
		}
	}
	cout<< Complete;
	return 0;

}