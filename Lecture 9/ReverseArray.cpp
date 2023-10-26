#include<iostream>
using namespace std;

// function to reverse an array
void ReverseArray(int arr[], int n)
{
    int start = 0, end = (n-1);
    while(start < end)
    {
        swap( arr[start], arr[end] );
        start++;
        end--;
    }
}
// function to print an array
void printArray(int arr[], int n)
{
    for(int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
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
    cout << "Array before reverse : "<<endl;
    printArray(arr, n);
    cout << endl;

    ReverseArray(arr, n);

    cout << "Array after reverse : "<<endl;
    printArray(arr, n);
    return 0;
}