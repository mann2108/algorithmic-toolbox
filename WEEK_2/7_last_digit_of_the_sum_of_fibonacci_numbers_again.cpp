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
        temp3 = (temp1 + temp2)%m;
        ll tmp = temp2;
        temp2 = temp3;
        temp1 = tmp;
    }
    return temp3%m;
}

int main() {
    ll l,r, m=10;
    cin>>l>>r;
    l-=1;
    ll ans1 = (fib_with_modulo(r+2,m)-1)%m;
    ll ans2 = (fib_with_modulo(l+2,m)-1)%m;
    ll ans = ans1-ans2;
    if(ans<0) ans+=10;
    cout<<ans<<endl;
}

