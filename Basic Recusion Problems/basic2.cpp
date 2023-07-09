#include<bits/stdc++.h>
using namespace std;

// Print linearly from 1 to n
void print(int n){
    if(n == 1){
        cout << n << " ";
    } else {
        print(n-1);
        cout<< n <<" ";
    }
}

int main(){
    print(5);
    cout << endl;
    return 0;
}
