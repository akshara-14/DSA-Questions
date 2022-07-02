#include <bits/stdc++.h>
using namespace std;

void compare(int arr[], int n)
{
    int min = arr[0], max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "The min element of the array is: " << min << endl;
    cout << "The max element of the array is: " << max << endl;
}

int main()
{
    int n, arr[n];
    cout << "Enter length of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    compare(arr, n);
    return 0;
}