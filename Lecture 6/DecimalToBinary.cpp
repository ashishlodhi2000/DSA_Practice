#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, i = 0, ans = 0;
    cout <<"Enter a decimal number to convert in binary : ";
    cin >> n;
    while(n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n  >> 1;
        i++;
    }
    cout<<"Binary : "<<ans;
    return 0;
}