#include<iostream>
using namespace std;

//function for summation of all elements of array
int sum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
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
    cout << "Sum of all elements of array = " << sum(arr, n);  
    return 0;
}