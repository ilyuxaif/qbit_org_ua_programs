#include <iostream>
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
        if ((arr[i] % 2 != 0) ||
           (((abs(arr[i]) > 99) && (abs(arr[i]) < 1000)) && (arr[i] > 0)))
                cout << "YES" << endl;
        else cout << "NO" << endl;
    }
   return 0;
}
