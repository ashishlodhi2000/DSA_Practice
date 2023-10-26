#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int a = 0, b = 1;
    cout<< a <<" "<< b <<" ";
    for(int i = 0; i < n; i++)
    {
        int nextFibb = a + b;
        cout<<nextFibb<<" ";
        a = b;
        b = nextFibb;
    }   
    return 0;
}