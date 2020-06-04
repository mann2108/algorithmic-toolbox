#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll d, m ,n;
    cin>>d>>m>>n;
    vector<pair<ll,ll> > stops(n+1);
    ll x;
    for(ll i=0;i<n;i++) {
        cin>>x;
        if(i==0)stops[i].first = 0;
        else stops[i].first = stops[i-1].second;
        stops[i].second = x;
    }
    stops[n].first = stops[n-1].second;
    stops[n].second = d;
    ll current_fuel = m;
    ll ans = -1;
    ll prev = 0;
    for(ll i=0;i<=n;i++) {
        if(current_fuel <= (stops[i].second - stops[i].first)) {
            if(i==0 or m < (stops[i].second - stops[i].first)) {
                ans = -1;
                break;
            }
            else {
                current_fuel = m;
                if(ans==-1) ans=0;
                ans+=1;
            }
        }
        else {
            current_fuel -= (stops[i].second - stops[i].first);
        }
    }
    cout<<ans<<endl;
}
