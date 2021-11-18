#include <iostream>
#include <iomanip>
using namespace std;


int main(){

int n;
cin >> n;

double fact_n = 1;

if (n == 0 || n == 1)
{
    cout << 1;
}
else
{
for (int i = 1; i <= n; i++)
{
    fact_n = fact_n * i;

}

cout << setprecision(25) << fact_n << endl;
}
return 0;
}