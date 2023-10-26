#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to check whether power of two or not : ";
    cin >> n;
    int count = 0;
    // count contains number of set bits for 
    while(n != 0)
    {
        int bit = n & 1;
        if(bit)
        {
            count++;
        }
        n = n >> 1;
    }
    if(count == 1)
    {
        cout << "Power of 2";
    }
    else
    {
        cout << "Not a power of 2";
    }  
    return 0;
}