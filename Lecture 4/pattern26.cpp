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
        int space = n - i + 1; 
        while(space)
        {
            cout<<"  ";
            space--;
        }
        int num = i;
        int count = 1;
        while(num)
        {
            cout<<count<<" ";
            count++;
            num--;
        }
        int num1 = i - 1;
        while(num1)
        {
            cout<<num1<<" ";
            num1--;
        }
        cout<<endl;
        i++;
    }   
    return 0;
}