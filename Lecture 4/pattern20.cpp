#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i = 1;
    while(i <= n)
    {
        int space = n - i + 1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j = i;
        while(j)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i = i + 1;
    }   
    return 0;
}