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
            cout<<" ";
            space--;
        }
        int star = i;
        while(star)
        {
            cout<<i;
            star--;
        }
        cout<<endl;
        i++;
    }   
    return 0;
}