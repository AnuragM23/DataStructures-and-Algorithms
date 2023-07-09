#include<bits/stdc++.h>
using namespace std;


// Insertion Sort :- Takes an element and put it in its correct order
void Sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j>0; j--){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            } else{
                break;
            }
        }
    }
}

void RecursiveInsertionSort(int arr[], int n){
    if(n==0) return;
    RecursiveInsertionSort(arr, n-1);
    for(int i=n+1; i>0; i--){
        if(arr[i] < arr[i-1]){
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
        } else{
            return;
        }
    }
}

//Time Complexity : Worst Case and Average case = O(N^2)
//             Best Case = O(N)

int main(){
    int a[] = {2,4,3,1,4,5,1,3};
    RecursiveInsertionSort(a, 8);
    for(int i : a){
        cout << i <<"\n";
    }
    return 0;
}