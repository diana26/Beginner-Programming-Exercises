#include <iostream>

using namespace std;

int main()
{
     int Array[50], temp, n, i, j;
 cout<<"Enter the number of elements of your array:";
 cin >> n;
 for(i=1; i<=n; i++){
     cout<<"Element:";
     cin>>Array[i];
 }
     for(i=1; i<n; i++){
         temp = Array[i];
         j = i-1;
         while(Array[j] >= temp && j>0){
             Array[j+1] = Array[j];
             j--;
             }
              Array[j+1] = temp;
         }
     cout<<"The array is:";
     for(i=1; i<=n; i++)
         cout<<Array[i] << " ";
         return 0;
}
