#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll findPisanoPeriod(ll m) {
    ll temp1 = 0;
    ll temp2 = 1;
    ll temp3;
    for(ll i=0;i<m*m;i++) {
        temp3 = temp1;
        temp1 = temp2;
        temp2 = (temp3 + temp2)%m;
        if(temp1==0 and temp2==1) return i+1;
    }
}


ll fib_with_modulo(ll n,ll m) {
    ll pisano_Period = findPisanoPeriod(m);
    n = n % pisano_Period;
    if(n<=1){
        return n;
    }
    ll temp1 = 0;
    ll temp2 = 1;
    ll temp3;
    for(ll i=0;i<n-1;i++) {
        temp3 = temp1 + temp2;
        ll tmp = temp2;
        temp2 = temp3;
        temp1 = tmp;

    }
    return temp3%m;
}

int main() {
    ll n, m;
    cin>>n>>m;
    cout<<fib_with_modulo(n,m);
}
