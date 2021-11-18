#include <iostream>

using namespace std;

int main()
{

    int numbers[5];
    int case1 = 0, case2 = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (abs(numbers[i]) % 2 == 0)
        {
            case1 = 1;
        }
        else
            case1 = 0;
        if ((numbers[i] % 3 == 0) && (numbers[i] < 0))
            case2 = 1;
        else
            case2 = 0;
        if (case1 + case2 == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


   return 0;
}