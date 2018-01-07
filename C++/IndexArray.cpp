#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long N,M,Array[10000],x;
    cin>>N>>M;
    for(int i=1; i<=N; i++)
    {
        cin>>Array[i];
    }
    for(int i=1; i<=N; i++)
    {
        if(Array[i]==M)
        {
           x=i;
        }
        else if(Array[i]!=M)
        {
            x=-1;
        }
    }
    cout <<x;
    return 0;
}