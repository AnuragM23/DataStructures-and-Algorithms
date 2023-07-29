
#include <bits/stdc++.h>
using namespace std;

int searchInsert(int arr[], int n, int m)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > m)
            high = mid - 1;
        else if (arr[mid] < m)
            low = mid + 1;
        else
            return mid;
    }
    return low;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 8};
    int ans = searchInsert(arr, 6, 2);
    cout << ans << endl;
    return 0;
}
