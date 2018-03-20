#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, Array[101], b = 0, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> Array[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(Array[i] >= 0)
        {
            b = b + Array[i];
        }
        else if(Array[i] < 0)
        {
            c = c + Array[i];
        }
    }
    cout << b - c;
    return 0;
}
