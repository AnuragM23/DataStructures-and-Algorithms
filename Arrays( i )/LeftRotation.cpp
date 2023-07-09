#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int k){
    //Brute Sollution
    k = k%n;
    vector<int> v(k);
    for(int i=0; i<k; i++){
        v[i] = arr[i];
    }
    for(int i=k; i<n; i++){
        arr[i-k] = arr[i];
    }
    for(int i=n-k; i<n; i++){
        arr[i] = v[i-(n-k)];
    }
}

int main(){
    int p[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotate(p, 9, 27);
    for(int i : p){
        cout << i << endl;
    }
    return 0;
}