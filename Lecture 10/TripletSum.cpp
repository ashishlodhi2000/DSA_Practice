#include<iostream>
using namespace std;

void PairSum(int arr[], int n, int sum)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                }
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
    cout << "Triplet of numbers which sum is " << sum << " -" << endl;
    PairSum(arr, n, sum);
    return 0;
}