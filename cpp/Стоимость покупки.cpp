#include <iostream>
using namespace std;


int main()
{
    int a, b, n;

    cin >> a >> b >> n;
    int tg, shm;

    tg = a * n;
    shm = b * n;
    tg = tg + ((shm - shm % 100)/100);
    shm = shm % 100;

    cout << tg << " " << shm;





    return 0;
}
