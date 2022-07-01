// Write a program to reverse an array or string

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}