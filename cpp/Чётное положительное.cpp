#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;

    cin >> a;

   if ((a % 2 == 0) && (a > 0))
        {
            if (a % 2 == 0)
                cout << "YES" << "\n" << a + 2 << endl;
            else cout << "YES" << "\n" << a + 1 << endl;
        }
        else if (a > 0) cout << "NO\n" << a + 1;
   else if (a <= 0) cout << "NO\n" << 2 << endl;

    return 0;
}