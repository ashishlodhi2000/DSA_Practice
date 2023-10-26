#include<iostream>
using namespace std;

int FindUnique(int arr[], int n)
{
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[50], n;
    cout << "How many numbers in array you want : ";
    cin >> n;
    cout << "Enter " << n <<" numbers : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unique element is "<< FindUnique(arr, n);
    
    return 0;
}