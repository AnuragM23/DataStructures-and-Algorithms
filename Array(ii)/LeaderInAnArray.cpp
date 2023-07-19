#include<bits/stdc++.h>
using namespace std;

vector<int> LeaderElements(vector<int> arr, int n){
    int max=INT_MIN;
    vector<int> ans;
    for(int i=n-1; i>=0; i--){
        if(arr[i] > max){
            max = arr[i];
            ans.push_back(arr[i]);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> arr = {1,2,5,1,3};
    vector<int> ans = LeaderElements(arr,5);
    for(int i : ans){
        cout << i << endl;
    }
    return 0;
}