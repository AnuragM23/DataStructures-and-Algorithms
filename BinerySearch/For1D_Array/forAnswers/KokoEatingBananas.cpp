#include <bits/stdc++.h>
using namespace std;

int maximumElement(vector<int> piles)
{
    int ans = INT_MIN;
    for (int i : piles)
    {
        if (i > ans)
            ans = i;
    }
    return ans;
}

long long totalHours(vector<int> piles, int n)
{
    long long sum = 0;
    for (int i : piles)
    {
        sum += ceil((double)i / (double)n);
    }
    return sum;
}

int minimumRateToEatBananas(vector<int> piles, int h)
{
    int low = 1, high = maximumElement(piles);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (totalHours(piles, mid) <= h)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return low;
}

int main()
{
    vector<int> piles = {25, 46, 28, 49, 24};
    cout << minimumRateToEatBananas(piles, 18) << endl;
    return 0;
}
