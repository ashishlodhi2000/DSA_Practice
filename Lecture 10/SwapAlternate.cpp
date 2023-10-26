#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n)
{
    for(int i = 0; i < n; i += 2)
    {
        if(i+1 < n)
        swap(arr[i], arr[i+1]);
    }
}
int main()
{
    int arr[50], n;
    cout << "How many numbers you want in array : ";
    cin >> n;
    cout << "Enter " << n << " numbers : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array before swap." << endl;
    printArray(arr, n);
    
    swapAlternate(arr, n);

    cout << "Array after swap." << endl;
    printArray(arr, n);
    return 0;
}