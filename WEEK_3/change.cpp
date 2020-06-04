#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll;

ll change(ll m) {
    ll cnt = 0;
    while(m>=10) {
        m-=10;
        cnt++;
    }
    while(m>=5) {
        m-=5;
        cnt++;
    }
    while(m>=1) {
        m-=1;
        cnt++;
    }
    return cnt;
}

int main() {
    ll m;
    cin>>m;
    cout<<change(m)<<endl;
}
