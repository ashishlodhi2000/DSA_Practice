#include<iostream>
using namespace std;

void PairSum(int arr[], int n, int sum)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout << arr[i] << "," << arr[j] << endl;
            }
        }
    }
}

int main()
{
    int arr[20], n, sum;
    cout << "How many numbers you want in an array : ";
    cin >> n;
    cout << "Enter " << n << " numbers : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }   
    cout << "Enter sum : ";
    cin >> sum;
    cout << "Pair of numbers which sum is " << sum << " -" << endl;
    PairSum(arr, n, sum);
    return 0;
}