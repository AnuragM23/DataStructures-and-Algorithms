#include<bits/stdc++.h>
using namespace std;


long long LongestSubArray(int arr[], int k, int n){
    
    //... Better Approach and Optimal for Negetives...
    // map<long long, int> preSum;
    // long long sum=0;
    // int maxLen=0;
    // for(int i=0; i< n; i++){
    //     sum += arr[i];
    //     if(sum == k){
    //         maxLen = i+1;
    //     }
    //     long long rem = sum - k;
    //     if(preSum.find(rem) != preSum.end()){
    //         int len = i - preSum[rem];
    //         maxLen = max(maxLen, len);
    //     }
    //     if(preSum.find(sum) == preSum.end()) preSum[sum] = i;
    // }
    // return maxLen;


    //... Optimum Approach for positives only...
    int left=0, right=0;
    long long sum=arr[0];
    int maxLength = 0;
    while(right < n){
        while(left<=right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxLength = max(maxLength, right-left+1);
        }
        right++;
        if(right < n) sum+=arr[right];
    }
    return maxLength;
}

int main(){
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    cout << LongestSubArray(arr, 7, 10) << endl;
    return 0;
}