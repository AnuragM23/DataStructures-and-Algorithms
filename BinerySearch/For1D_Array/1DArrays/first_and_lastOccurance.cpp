#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int> &arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            first = mid;
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurance(vector<int> &arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            last = mid;
            low = mid + 1;
        }
    }
    return last;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    return {firstOccurance(arr, n, k), lastOccurance(arr, n, k)};
}
int main()
{
    vector<int> arr = {1, 3, 4, 5, 5, 5};
    pair<int, int> ans = firstAndLastPosition(arr, 6, 5);
    cout << ans.first << endl
         << ans.second << endl;
    return 0;
}