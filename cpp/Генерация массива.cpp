#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x;
    cin >> x;
    long int arr[10];

    arr[0] = x;
    cout << arr[0] << " ";

    for (int i = 1; i < 10; i++)
    {
        arr[i] = (arr[i-1] * arr[i-1]) % 100 - (5 * arr[i-1]) + 6;
        cout << setprecision(10) << arr[i] << " ";
    }

    return 0;
}