#include <iostream>
#include <string>
using namespace std;


string dec2bin(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
int main()
{
    int a;
    cin >> a;
    int res = 0;
    string binstr = dec2bin(a);

    for (int j = 0; j < binstr.size(); j ++)
    {
        res += (int)binstr[j] - 48;
    }
    cout << res;


    return 0;
}