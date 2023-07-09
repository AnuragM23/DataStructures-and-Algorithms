#include<bits/stdc++.h>
using namespace std;

// Print name 5times
int i=0;
void print(){
    if(i == 5){
        return;
    }
    cout << "Name \n";
    i++;
    print();
}

int main(){
    print();
    return 0;
}
