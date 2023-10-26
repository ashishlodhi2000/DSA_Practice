#include<iostream>
using namespace std;

// funtion to print an array
void PrintArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function to sort 0's and 1's
void SortArray(int arr[], int n)
{
    int i = 0, j = n - 1;
    while(i < j)
    {
        if(arr[i] == 0)
        {
            i++;
        }
        if(arr[j] == 1)
        {
            j--;
        }
        if(arr[i] == 1 && arr[j] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[20], n;
    cout << "How many numbers you want in an array : ";
    cin >> n;
    cout << "Enter " << n << " numbers : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }   
    cout << "Array before sort : " << endl;
    PrintArray(arr, n);
    cout << "Array after sort : " << endl;
    SortArray(arr, n);
    PrintArray(arr, n);
    return 0;
}