#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strName, strLastName;
	cout << "Enter the name:" << endl;
	cin >> strName;
	cout << "Enter the lastname:" << endl;
	cin >> strLastName;

	string strCompleteName = strName + "\t" + strLastName;
	cout << strCompleteName << endl;
	
	for (int i = 0; i <= strCompleteName.length(); i++){
		if (strCompleteName[i] = 'a'){
			strCompleteName[i] = 'z';
		}
	}
	cout << strCompleteName << endl;
	return 0;

}