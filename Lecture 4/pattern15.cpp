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
        int j = 1;
        while(j <= i)
        {
            char ch = 'A'+n-i+j-1;
            cout<<ch<<" ";
            j += 1;
        }
        cout<<endl;
        i += 1;
    }
    return 0;
}