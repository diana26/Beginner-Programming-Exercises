#include <iostream>
#include <string>
#include <algorithm> 
#include <limits>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N, K;
    long long array[1000000], ans, minimun, champ;
    long long maxi = LONG_MAX;
    
    cin >> N >> K;
    for(int i = 1; i <= K; i++)
    {
        cin >> array[i];
    }
    for(int i = 1; i <= K; i++)
    {    
         maxi = min(maxi, N%array[i]);
    }
    for(int i = 1; i <= K; i++)
    {
        if(N%array[i] == maxi)
        ans = i;
    }
    cout << ans << " " << N/array[ans];
    return 0;
}