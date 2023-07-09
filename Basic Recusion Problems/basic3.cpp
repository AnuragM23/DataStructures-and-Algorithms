#include<bits/stdc++.h>
using namespace std;

//Print from N to 1
void print(int n){
    if(n==1) cout << n <<" ";
    else{
        cout << n << " ";
        print(n-1);
    }
}

int main(){
    print(5);
    return 0;
}