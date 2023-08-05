#include <bits/stdc++.h>
using namespace std;
bool CanWePlaceCows(vector<int> &stalls, int cows, int k)
{
    int countcows = 1, last = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - last >= k)
        {
            countcows++;
            last = stalls[i];
        }
        if (countcows >= cows)
            return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low = 1, high = stalls[n - 1] - stalls[0];

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (CanWePlaceCows(stalls, k, mid))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}
int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    cout << aggressiveCows(stalls, 4) << endl;
    return 0;
}