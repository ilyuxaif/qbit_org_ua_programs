#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if  (abs(arr[i]) <= pow(10, 9))
        {
            if (
                (arr[i] % 2 != 0) && (arr[i] < 0)
                )
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
            }
        else cout << "NO" << endl;
    }
   return 0;
}