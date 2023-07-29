
#include <bits/stdc++.h>
using namespace std;

int findKRotation(int arr[], int n)
{
    int low = 0, high = n - 1;
    int minIndex = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[low] <= arr[high])
        {
            if (arr[minIndex] > arr[low])
            {
                minIndex = low;
            }
            break;
        }
        if (arr[low] <= arr[mid])
        {
            if (arr[minIndex] > arr[low])
                minIndex = low;
            low = low + 1;
        }
        else
        {
            high = high - 1;
            if (arr[minIndex] > arr[mid])
                minIndex = mid;
        }
    }
    return minIndex;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 8, 1, 2, 3};
    int ans = findKRotation(arr, 8);
    cout << ans << endl;
    return 0;
}
