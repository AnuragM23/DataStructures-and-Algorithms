#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int low, int mid, int high){
    int i=low;
    int j=mid+1;
    vector<int> v;
    while(i<=mid && j<=high){
        if(arr[i] <= arr[j]){
            v.push_back(arr[i]);
            i++;
        } 
        else{
            v.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        v.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        v.push_back(arr[j]);
        j++;
    }

    for(int k=low; k<=high; k++){
        arr[k] = v[k-low];
    }
}

void Sort(int arr[], int low, int high){
    if(low == high) return;
    int mid = (high + low)/2;
    Sort(arr, low, mid);
    Sort(arr, mid+1, high);
    Merge(arr, low, mid, high);
}


int main(){
    int arr[] = {2,4,1,5,3};
    Sort(arr,0,4);
    for(int i=0; i<=4; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
