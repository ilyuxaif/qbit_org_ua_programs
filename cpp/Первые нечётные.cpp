#include <iostream>
using namespace std;

int main()
{
    int n;      // число нужных чисел
    int a = 1;  // стартовая точка
    int i = 1;
    cin >> n;
    while (i <= n)
    {
        if (a % 2 != 0)
        {
            cout << a << " ";
            a ++;
        }
        i ++;
        a ++;
    }


   return 0;
}

