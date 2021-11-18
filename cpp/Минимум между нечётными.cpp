#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int n, l ,r, min;
    int l_index, r_index;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            l = arr[i];
            l_index = i;
            break;
        }
    }
    

    for (int i = l_index + 1; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            r = arr[i];
            r_index = i;
            break;
        }
    }
    

    min = arr[l_index];

    for (int i = l_index; i <= r_index; i++)
    {
        
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << min;


    return 0;
}
