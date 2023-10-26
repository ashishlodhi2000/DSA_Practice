#include<iostream>
using namespace std;
void printFibonacci(int n)
{
    int a = 0, b = 1;
    for(int i = 0; i<(n-2); i++)
    {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}
int main()
{
    int n;
    cout<<"How many numbers you want : ";
    cin >> n;
    cout<<"0 1 ";
    printFibonacci(n);   
    return 0;
}