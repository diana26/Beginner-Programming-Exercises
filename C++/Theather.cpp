// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long  m, n, a;
    long long count;
    cin >> m >> n >> a;
    long long x = m / a;
    long long  y = n / a;

    if (a >= m && a >= n)
    {
        count = 1;
    }
    else if (m % a == 0 && n % a == 0)
    {
        count = x * y;

    }
    else if (m % a != 0 && n % a == 0)
    {
        count =  x * y + x;
    }
    else if (n % a != 0 && m % a == 0)
    {
      count =  x * y + y;
    }
    else if (m % a != 0 && n % a != 0)
    {
      count =  x * y + x + y + 1;
    }
    else if (a >= m && a >= n)
    {
        count = 1;
    }
    else if (a == 1)
    {
        count = m*n;
    }

      cout << count;
      return 0;

}
