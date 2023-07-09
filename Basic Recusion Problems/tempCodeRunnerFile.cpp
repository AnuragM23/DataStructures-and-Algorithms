#include<bits/stdc++.h>
using namespace std;

// Counting frequencies of array elements


int main(){
    int n;
    int arr[] = {0};
    cout << "Enter the length of the array :\n";
    cin >> n;
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for(auto i : mpp){
        cout << i.first << "  " << i.second <<"\n";
    }
    
    return 0;
}