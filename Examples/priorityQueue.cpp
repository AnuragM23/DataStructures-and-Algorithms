#include<bits/stdc++.h>
using namespace std;

int main(){
    // priority_queue<int> p;
    // p.push(2);
    // p.push(1);
    // p.push(5);
    // p.push(4);
    // p.pop();
    // cout << p.top() << endl;
    
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(2);
    p.push(1);
    p.push(5);
    p.push(4);
    p.pop();
    cout << p.top() << endl;

    return 0;
}