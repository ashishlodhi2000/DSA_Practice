#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin >> n;
    int i = 1;
    while(i <= n)
    {
        int space = i - 1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int num = i;
        while(num <= n)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
        i++;
    }   
    return 0;
}