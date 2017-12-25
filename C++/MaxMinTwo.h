// Example program
#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,Array[1000],position,swap,count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>Array[i];
    }
    for(int i=0; i<(n-1); i++)
    {
        position =i;
        for(int j=i; j<n; j++)
        {
            if(Array[position]>Array[j])
            position=j;
        }
        if(position!=i)
        {
            swap=Array[i];
            Array[i]=Array[position];
            Array[position]=swap;
        }
    }
    for(int i=0; i<n; i++)
    {
        if( (Array[i]-Array[i-1]) >=2)
        {
            cout<<"NO";
            break;
        }
            else count++;
    }
    
        if(count==(n-1)) 
        cout<<"YES";
    return 0;
    }

