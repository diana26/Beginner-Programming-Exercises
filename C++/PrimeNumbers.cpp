#include <iostream>
#include<string>
#include <algorithm>
#include <cstddef>
#include <bits/stdc++.h>
using namespace std;

void PrimeNumbers(int n)
{
    bool Array[n+1];
    memset(Array, true, sizeof(Array));
    for (int i = 2; i*i <= n; i++)
    {
        if (Array[i] == true)
        {
            for (int x = i*2; x <= n; x += i)
                Array[x] = false;
        }
    }
    for (int i = 2; i <= n; i ++)
       if (Array[i])
          cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    PrimeNumbers(n);
    return 0;
}

