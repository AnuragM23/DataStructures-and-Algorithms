#include <bits/stdc++.h>
using namespace std;

// The lower bound algorithm finds the first or the smallest index in a sorted array where
// the value at that index is greater than or equal to a given key i.e. x.
int lowerBound(int arr[], int n, int x)
{
    int flag = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
            flag = 1;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            return mid;
    }
    if (flag != -1)
        return low;
    else
        return n;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 8};
    int ans = lowerBound(arr, 6, 7);
    cout << ans << endl;
    return 0;
}