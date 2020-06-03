#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fib(ll n) {
    if(n==0) return 0;
    if(n==1 or n==2) return 1;
    ll temp1 = 1, temp2 = 1;
    ll temp3;
    for(ll i=3;i<=n;i++) {
        temp3 = temp1 + temp2;
        temp1 = temp2;
        temp2 = temp3;
    }
    return temp3;
}

int main() {
    ll n, m;
    cin>>n;
    cout<<fib(n)<<endl;
}
