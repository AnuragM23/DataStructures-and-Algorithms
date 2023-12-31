#include <bits/stdc++.h>
using namespace std;

vector<int> nxtPermutation(vector<int> arr, int n){
    int index=-1;
    for(int i=n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(arr.begin(), arr.end());
        return arr;
    }
    for(int i=n-1; i>index; i--){
        if(arr[i] > arr[index]){
            swap(arr[index], arr[i]);
            break;
        }
    }
    reverse(arr.begin()+index+1, arr.end());
    return arr;
}

int main(){
    vector<int> arr = {1,2,5,4,3};
    vector<int> ans = nxtPermutation(arr,5);
    for(int i : ans){
        cout << i << endl;
    }
    return 0;
}