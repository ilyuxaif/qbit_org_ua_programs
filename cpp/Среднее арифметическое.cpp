#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int N;
    int count = 0;
    float sum = 0;
    cin >> N;
//    int arr[N];

    vector<int> arr(N);
    for (auto& it : arr)
        cin >> it;

//    cout << endl;

//    for (int i = 0; i < N; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
    for (int i = 1; i <= N; i=i+2)
    {
        if (arr[i] % 2 != 0)
        {
            sum = sum + arr[i];
            count ++;
        }
    }
//    cout << endl;
//    cout << "sum = " << sum << endl;
//    cout << "count = " << count;
    if (count != 0)
    {
        cout << sum / count;
    }
    else cout << 0;
    return 0;
}