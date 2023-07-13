#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(int a[], int n, int b[], int m){
    int i=0, j=0;
    vector<int> intersectionArray;
    while(i<n && j<m){
        if(a[i] < b[j]) i++;
        else if(a[i] > b[j]) j++;
        else{
            intersectionArray.emplace_back(a[i]);
            i++;
            j++;
        }
    }
    return intersectionArray;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {1, 2, 3, 4, 7};
    vector<int> result = intersection(a, 6, b, 5);
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}