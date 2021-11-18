#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a <= 12 && a > 0)
    {
        if (a == 2)
            cout << 28 << endl;
    else if (a == 4 || a == 6 || a == 9 || a == 11)
            cout << 30 << endl;
    else cout << 31 << endl;
    }
    else cout << "Error" << endl;
    return 0;
}