#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, max, max_count, min, min_count;
    int n ;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
//finding sum
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

//finding max and it's index
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
            max_count = i+1;
        }
    }

//finding minimum and it's index

    min = arr[n-1];
    for (i = n-1; i >= 0; i--)
    {
        if (min >= arr[i])
        {
            min = arr[i];
            min_count = i+1;
        }
    }

    cout << sum << endl;
    cout << max << " " << max_count << endl;
    cout << min << " " << min_count << endl;


    return 0;
}