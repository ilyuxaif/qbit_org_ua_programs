#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (abs(a) <= 10000)
    {
        if (a == 0) cout << 0 << endl;
        else
        {
        if (a > 0)
            cout << a * a << endl;
        if (a < 0)
            cout << abs(a) << endl;
        }
    }

return 0;
}
