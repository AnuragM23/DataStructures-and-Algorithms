#include<bits/stdc++.h>
using namespace std;

long long func(int n){
        long long sum=0;
        for(int i=1 ; i*i<=n ; i++){
            if(n%i == 0){
                sum+=i;
                if((n/i) != i){
                    sum+=(n/i);
                }
            }
        }
        return sum;
    }

long long sumOfDivisors(int N)
{
    long long ans=0;
    for(int i=1 ; i<=N ; i++){
        ans +=func(i);
    }
    return ans;
}

int main(){
    cout << sumOfDivisors(4)<<"\n";
    return 0;
}