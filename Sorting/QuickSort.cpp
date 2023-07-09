#include<bits/stdc++.h>
using namespace std;

int pivotIndex(int arr[], int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j]=temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j]=temp;
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low == high) return;
    int pi = pivotIndex(arr, low, high);
    quickSort(arr, low, pi-1);
    quickSort(arr, pi+1, high);
}

int main(){
    int arr[] = {2,4,1,5,3};
    quickSort(arr,0,4);
    for(int i=0; i<=4; i++){
        cout << arr[i] << endl;
    }
    return 0;
}

