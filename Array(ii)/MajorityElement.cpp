#include<bits/stdc++.h>
using namespace std;

// Moore's Voting Algorithm
int majorElement(int arr[], int n){
    int count=0;
    int major = arr[0];
    for(int i=1; i<n; i++){
        if(count < 0){
            count = 0;
            major = arr[i];
        } else if(arr[i] == major){
            count++;
        } else {
            count--;
        }
    }
    if(major > n/2) return major;
    return -1;
}

int main(){
    int arr[] = {20, 20, -30, 20, -50, 20};
    cout << majorElement(arr, 6) << endl;
    return 0;
}