#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
 string str;
 cin >> str;

 if(str == string (str.rbegin(), str.rend()))
   {
    cout << "YES";
   }
   else
   {
       cout<< "NO";
    }

 return 0;
}

