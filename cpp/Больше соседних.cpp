#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int num;
    int N;
    cin >> N;
    int count = 0;

    vector<int> arr(N);
    for (auto& it : arr)
        cin >> it;

    for (int i = 1; i < (N - 1); i ++)
    {
        if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1]))
            {
                count ++;
            }
    }

    cout << count;
    return 0;
}