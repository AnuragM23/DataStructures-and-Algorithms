#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Sort012(int arr[], int n){
    int low=0, mid=0, high=n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid++], arr[low++]);
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high--]);
        } else mid++;
    }
}

int main(){
    int arr[] = {0,1,2,0,1,2,0,1,2,0,0,1,1,2,2};
    Sort012(arr, 15);
    for(int i : arr){
        cout << i << endl;
    }
    return 0;
}