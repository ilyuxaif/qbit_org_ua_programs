#include <iostream>
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

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
//    cout << "Enter a positive  integer: ";
    for (int i = 0; i < 5; i++)
    {
        if (checkPrimeNumber(arr[i]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}