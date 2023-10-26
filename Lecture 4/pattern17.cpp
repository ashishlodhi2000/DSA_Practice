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
        int star = n - i + 1;
        while(star)
        {
            cout<<"*";
            star--;
        }
        int j = 1;
        while(j <= i)
        {
            cout<<" ";
            j++;
        }
        cout<<endl;
        i += 1;
    }
    return 0;
}