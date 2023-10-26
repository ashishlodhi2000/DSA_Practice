#include<iostream>
using namespace std;

// function to search a number 

int LinearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[50], n, key;
    cout << "How many numbers you want in an array : ";
    cin >> n;
    cout << "Enter " << n << " numbers : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }   
    cout << "Enter a number search in an array : ";
    cin >> key;
    cout << "Number found at index : " << LinearSearch(arr, n, key);
    return 0;
}