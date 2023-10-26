#include<iostream>
using namespace std;
// function for counting total bits in two numbers. 
int countSetBits(int n1, int n2)
{
    int count = 0;
    while(n1 != 0)
    {
        if(n1 & 1)
        {
            count++;
        }
        n1 = n1 >> 1;
    }
    while(n2 != 0)
    {
        if(n2 & 1)
        {
            count++;
        }
        n2 = n2 >> 1;
    }
    return count;
}

int main()
{
    int n1, n2;
    cout << "Enter two numbers : ";
    cin >> n1 >> n2;
    cout << "Total no. of set bits : " << countSetBits(n1, n2);   
    return 0;
}