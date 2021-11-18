#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long int n;
    cin >> n;

    int x = 1, y = 0;

    while ((pow(2, y)) <= n)
    {
        x = pow(2, y);
        cout << x << " ";
        y += 1;
    }

    return 0;
}