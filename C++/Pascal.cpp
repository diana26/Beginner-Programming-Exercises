#include <iostream>

using namespace std;

int main()
{
   int size;
   cout <<"Enter the size of the triangle:" << endl;
   cin >> size;

   for(int i=1; i<= size; i++){
       int n = 1;
    for(int j=1; j <= size-i; j++){
        cout << " " ;
    }
     for (int x = 0; x <= i; x++)
        {
            cout << "      " << n;
            n = n * (i - x) / (x + 1);
        }
        cout << endl << endl;

   }
cout << endl;
    return 0;
}
