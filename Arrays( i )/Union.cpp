#include<bits/stdc++.h>
using namespace std;

vector<int> UnionOfArrays(int a[], int b[], int n1, int n2){
    int i=0, j=0;
    vector<int> ans;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            if(ans.size()==0 || ans.back()!=a[i]) ans.push_back(a[i]);
            i++;
        } else {
            if(ans.size()==0 || ans.back()!=b[j]) ans.push_back(b[j]);
            j++;
        }
    }
    while(i<n1){
        if(ans.size()==0 || ans.back()!=a[i]) ans.push_back(a[i]);
        i++;
    }
    while(j<n2){
        if(ans.size()==0 || ans.back()!=b[j]) ans.push_back(b[j]);
        j++;
    }
    return ans;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {1, 2, 3, 4, 7};
    vector<int> result = UnionOfArrays(a, b, 6, 5);
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}