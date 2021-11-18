#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    int i_min = 0;
    int i_max = 0;
    cin >> N;
    long sum = 0;
    vector<int> arr(N);
    for (auto& it : arr)
    {
        cin >> it;
    }

    int L = arr[0];
    int R = arr[0];

    for (int i = 0; i < N; i ++)
    {
        if (L > arr[i])
        {
            L = arr[i];
            i_min = i;
        }
        if (R <= arr[i])
        {
            R = arr[i];
            i_max = i;
        }
    }

    if (i_min > i_max)
    {
        for (int i = i_max; i <= i_min; i ++)
        {
            sum = sum + arr[i];
        }
    }
    else
    {
        for (int i = i_min; i <= i_max; i ++)
        {
            sum = sum + arr[i];
        }
    }
    cout << sum;

    return 0;
}
