#include<bits/stdc++.h>
using namespace std;

// reversing an array using recursion.
void reverseArray(int arr[], int l, int r){
    if(l >= r) return;

    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    reverseArray(arr, l+1, r-1);
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    reverseArray(a, 0, 4);
    for(int i : a){
        cout << i << "\n";
    }
    return 0;
}