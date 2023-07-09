#include<bits/stdc++.h>
using namespace std;



void Sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int didSwap=0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap=1;
            }
        }
        if(didSwap == 0) break;
    }
}

void RecursiveBubbleSort(int arr[], int n){
    if(n==0) return;
    int isSwapped = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            isSwapped=1;
        }
    }
    if(isSwapped == 0) return;
    RecursiveBubbleSort(arr, n-1);
}

//Time Complexity : Worst Case and Average case = O(N^2)
//             Best Case = O(N)

int main(){
    int a[] = {2,4,5,1,3};
    RecursiveBubbleSort(a, 5);
    for(int i : a){
        cout << i <<"\n";
    }
    return 0;
}