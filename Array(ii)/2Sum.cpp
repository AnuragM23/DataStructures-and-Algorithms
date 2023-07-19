#include<bits/stdc++.h>
using namespace std;

vector<int> SumPairs(int arr[], int n, int k){
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        int second = k - arr[i];
        if(mpp.find(second) != mpp.end()){
            return {mpp[second], i};
        }
        mpp[arr[i]] = i;
    }
    return {-1, -1};
}

int main(){
    int arr[] = {0,1,2, 4,0,0,3,8};
    vector<int> result = SumPairs(arr, 8, 7);
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}