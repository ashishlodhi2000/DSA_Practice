#include<iostream>
using namespace std;

// function to find intersection

void FindIntersection(int arr1[], int m, int arr2[], int n)
{
    int i =0 , j = 0;
    while(i < m && j < n)
    {
        if(arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

}

int main()
{
    int arr1[20], arr2[20], m, n;
    // taking number in first array
    cout << "How many numbers you want in first array : ";
    cin >> m;
    cout << "Enter " << m << " numbers : ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    // taking numbers in second array
    cout << "How many numbers you want in second array : ";
    cin >> n;
    cout << "Enter " << n << " numbers : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    // intersection of both array
    cout << "Intersection of first and second array is - ";
    FindIntersection(arr1, m , arr2, n);
    
    return 0;
}