#include <iostream>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    int size_n = 0;

    string num = to_string(n);
    size_n = num.size();




    int array[size_n];

    for (int i = size_n; i >= 1; i--)
    {
        array[i] = n % 10;

        n = n / 10;


    }

    for (int i = 1; i <= size_n; i++)
    {
        cout << array[i] << " ";
    }

   return 0;
}
