#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    if ((-10000 <= a) && (a <= 10000))
    {
        if (-10000 <= b <= 10000)
        {
            if (a > b)
            {
                cout << a * a << "\n";
                cout << b * b;
            }
            else
            {
                cout << b * b << "\n";
                cout << a * a;
            }
        }
    }


    return 0;
}