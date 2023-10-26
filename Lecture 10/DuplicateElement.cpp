#include<iostream>
using namespace std;

int DuplicateElement(int arr[], int n)
{
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
        if(ans == 0)
        {
            return arr[i];
        }
    }
    
    return ans;
}
int main()
{
    int arr[50], n;
    cout << "How many numbers you want in an array : ";
    cin >> n;
    cout << "Enter " << n << " numbers : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }   
    cout << "Duplicate element is : " << DuplicateElement(arr, n);
    return 0;
}