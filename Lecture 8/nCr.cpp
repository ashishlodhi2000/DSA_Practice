#include<iostream>
using namespace std;
int fact(int n)
{  
    // using recursion
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int nCr(int n, int r)
{
    int ans = fact(n) / (fact(r) * fact(n-r));
    return ans;
}
int main()
{
    int n, r;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;
    cout << "nCr is : " << nCr(n, r);
    return 0;
}