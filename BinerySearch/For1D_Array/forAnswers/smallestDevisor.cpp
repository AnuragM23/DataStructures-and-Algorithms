#include <bits/stdtr1c++.h>
using namespace std;

bool ifPossible(vector<int> arr, int limit, int key)
{
    int ans = 0;
    int n = arr.size();
    if (key == 0)
        return false;
    for (int i = 0; i < n; i++)
    {
        ans += ceil((double)arr[i] / (double)key);
    }
    if (ans <= limit)
        return true;
    return false;
}

int smallestDivisor(vector<int> &arr, int limit)
{
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        maxi = max(arr[i], maxi);
    }
    int low = 1, high = maxi;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (ifPossible(arr, limit, mid))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << smallestDivisor(arr, 8) << endl;
    return 0;
}