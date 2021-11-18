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
        if (
            ( (arr[i] >= 1000) && (arr[i] <= 9999)) &&                        // проверка количества цифр
                ((arr[i] % 2 != 0) && (arr[i] > 0)) &&         //
                    ((arr[i] % 3 != 0) && (arr[i] % 5 != 0))
            )
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

    }
   return 0;
}