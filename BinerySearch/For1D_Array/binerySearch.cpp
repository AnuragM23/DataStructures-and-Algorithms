#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    while(low <= high) {
        int mid = low + (high - low)/2;
        if (arr[mid] > target) high = mid-1;
        else if (arr[mid] < target) low = mid+1;
        else return mid;
    }
    return -1;
}

int main(){
    int arr[] = {1,3,4,5,6,7};
    int ans = binarySearch(arr, 0, 5, 4);
    cout << ans << endl;
    return 0;
}