#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, i = 0, ans = 0;
    cout <<"Enter a binary number to convert in decimal : ";
    cin >> n;
    while(n != 0)
    {
        int rem = n % 10;
        if(rem == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout<<"Decimal : "<<ans;
    return 0;
}