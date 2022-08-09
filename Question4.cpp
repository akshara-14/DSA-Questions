#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ptr1 = 0, ptr2 = n - 1;
    int i = 0;
    while (i <= ptr2)
    {
        if (arr[i] == 0)
        {
            swap(arr[i++], arr[ptr1++]);
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[ptr2--]);
        }
        else
        {
            i++;
        }
    }
    cout<<"The required array is \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
