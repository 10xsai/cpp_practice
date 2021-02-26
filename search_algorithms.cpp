#include <iostream>

using namespace std;

int linear_search(int *arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int binary_search(int *arr, int n, int x)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] == x)
            return m;
        else if (arr[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    cout << binary_search(arr, n, x);
    return 0;
}