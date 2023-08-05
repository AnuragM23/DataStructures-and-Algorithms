#include <bits/stdc++.h>
using namespace std;

bool ifPossible(vector<int> books, int students, int test)
{
    int countStudents = 1;
    long long load = books[0];
    for (int i = 1; i < books.size(); i++)
    {
        if (load + books[i] > test)
        {
            countStudents++;
            load = books[i];
        }
        else
        {
            load = load + books[i];
        }
    }
    if (countStudents > students)
        return true;
    return false;
}

int allocateBooks(vector<int> books, int students)
{
    int low = *max_element(books.begin(), books.end());
    int n = books.size();
    if (students > n)
        return -1;
    int high = accumulate(books.begin(), books.end(), 0);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (ifPossible(books, students, mid))
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

int main()
{
    vector<int> books = {25, 46, 28, 49, 24};
    cout << allocateBooks(books, 4) << endl;
    return 0;
}