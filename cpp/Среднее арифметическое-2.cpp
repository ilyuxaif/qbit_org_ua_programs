#include <iostream>
#include <vector>
using namespace std;

bool checkPrimeNumber(int n) {
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

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

    for (int i = 0; i < N; i++)
    {
        if (checkPrimeNumber(abs(arr[i])))
        {
            sum = sum + arr[i];
            count ++;
        }
    }

    if (count != 0)
    {
        cout << sum / count;
    }
    else cout << 0;

    return 0;
}