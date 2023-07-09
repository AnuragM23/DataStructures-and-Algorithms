#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v1(5,10);
    
    for(int i=1; i<=5 ; i++){
        v.emplace_back(i);
    }
    cout<<v1[2]<<"\n";
    // vector<int>::iterator it = v.begin();
    // cout << *(it) <<" \n";

    //vector<int>::iterator It = v1.begin();
    // for(auto It = v1.begin(); It != v1.end(); It++){
    //     cout << *(It) << " \n";
    // }

    for(auto i:v){
        cout<<i<<"\n";
    }

    return 0;
}





