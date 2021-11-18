#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    int n ;
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    for (i = 0; i < n; i += 2)
    {
        cout << arr[i] << " ";
    }
return 0;
}
