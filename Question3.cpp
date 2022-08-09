#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter size of array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the k-th smallest element required\n";
    cin >> k;
    sort(arr, arr + n);

    cout << "The required K-th smallest element is " << arr[k - 1];
    return 0;
}
