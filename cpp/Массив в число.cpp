#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string arr[10];
    string res = "";
    bool checker = false;

    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != "0")
            checker = true;
        if (checker)
            res = res + arr[i];
    }

    long j;
    istringstream(res) >> j;
    cout << j + 42 << endl;

    return 0;
}