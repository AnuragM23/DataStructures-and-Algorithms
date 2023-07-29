#include <bits/stdc++.h>
using namespace std;

int upperBound(int arr[], int x, int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 8};
    int ans = upperBound(arr, 6, 7);
    cout << ans << endl;
    return 0;
}