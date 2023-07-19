#include<bits/stdc++.h>
using namespace std;

int successiveSequence(vector<int> arr, int n){
    sort(arr.begin(), arr.end());
    int count=1;
    int maxLength=1;;
    for(int i=0; i< n-1; i++){
        if(arr[i]+1==arr[i+1]){
            count++;
        } else {
            count=1;
        }
        maxLength = max(maxLength, count);
    }
    return maxLength;
}

int main(){
    vector<int> arr = {1,2,5,8,3,6,7};
    cout << successiveSequence(arr,7) << endl; 
    return 0;
}

