#include<bits/stdc++.h>
using namespace std;

//Selection Sort :- Selecting the minimum element and then swap
void Sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int mini = i;
        // Finding the index of the minimum element 
        for(int j=i ; j<n; j++){
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }
        //Swaping the value to its required position. 
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

// Number of times the loops are running : n+(n-1)+(n-2)+(n-3)+...1 = n(n+1)/2
// TimeComplexity : O(n^2) 


int main(){
    int a[] = {2,4,5,1,3};
    Sort(a, 5);
    for(int i : a){
        cout << i <<"\n";
    }
    return 0;
}
