#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin >> n;
    int i = 1;
    int count = 1;
    while(i <= n)
    {
        int space = n - i + 1; 
        while(space)
        {
            cout<<" ";
            space--;
        }
        int num = i;
        while(num)
        {
            cout<<count;
            count++;
            num--;
        }
        cout<<endl;
        i++;
    }   
    return 0;
}