#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y, tmp;

    cin >> x >> y;

    int arr[10];

    arr[0] = x;
    arr[1] = y;
//    cout << arr[0] << " ";
//    cout << arr[1] << " ";

    for (int i = 2; i < 10; ++i)
    {
        arr[i] = arr[i-1] + arr[i-2];
//        cout << setprecision(10) << arr[i] << " ";
    }
//    cout << endl;

    for (int i = 0; i < 5; ++i)
    {
        tmp = arr[9-i];
        arr[9-i] = arr[i];
        arr[i] = tmp;
    }

    for (int i =0; i < 10; ++i)
    {
        cout << arr[i] << " ";
    }

//    cout << endl;

    return 0;
}