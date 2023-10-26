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
        int num = n - i + 1;
        int count = 1; 
        while(num)
        {
            cout<<count<<" ";
            num--;
            count++;
        }
        int star = 2 * i - 2;
        while(star)
        {
            cout<<"* ";
            star--;
        }
        int num1 = n - i + 1;
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