#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int moveZeros(int arr[], int n){
    int j=-1;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j=i;
            break;
        }
    }
    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            count++;
            j++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int count = moveZeros(arr,10);
    for(int i=0; i<10; i++){
        cout << arr[i] << endl;
    }
    return 0;
}