// Write a program to reverse an array or string

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

void printArray(int arr[], int n)
{
    cout << "The reversed array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
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
    reverseArray(arr, n);
    printArray(arr, n);
    return 0;
}