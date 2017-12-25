// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n, Array[n];
  string a="YES";
  cin>>n;
  for(int i=0; i<n; i++)
  {
      cin>>Array[i];
  }
  for(int i=0; i<n; i++)
  {
      if(Array[i]>n ||Array[i+1]>n || Array[i+2]>n || Array[i+3]>n || Array[i+4]>n)
      {
          cout<<"NO";
          break;
      }
      else if(Array[i]>=1 && Array[i]<=n || Array[i+1]>=1 && Array[i+1]<=n || Array[i+2]>=1 && Array[i+2]<=n || Array[i+3]>=1 && Array[i+3]<=n || Array[i+4]>=1 && Array[i+4]<=n)
      {
          
          cout<<a;
      }
      
  }
  return 0;
}
