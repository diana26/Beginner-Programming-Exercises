#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter a number" << endl;
    cin >> x;

    for (int i= 0; i <= 10; i++){
        if ( x != 5){
                cout << "Enter another number" << endl;
        cin >> x;
           cout << x << endl;
        }
        else {
            cout << "Hey! you weren't supposed to enter 5!" << endl;
        }
    }

    return 0;
}
