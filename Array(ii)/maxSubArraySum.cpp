#include<bits/stdc++.h>
using namespace std;

// ... Kadane's Algorithm ...
int maximumSubarraySum(int arr[], int n){
    int sum=0;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        maxi = max(maxi,sum);
        if(sum < 0) sum=0;
    }
    if(maxi > 0) return maxi;
    return 0;
}

int main(){
    int arr[] = {-10, 20, -30, 20, -50, 6};
    cout << maximumSubarraySum(arr, 6) << endl;
    return 0;
}