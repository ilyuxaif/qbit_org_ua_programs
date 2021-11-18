#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    if ((-100 <= a <= 100))
    {
        if (-100 <= b <= 100)
        {
            cout << a + b;
        }
    }


    return 0;
}