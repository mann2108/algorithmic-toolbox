#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool sorted(pair<double,ll> p1, pair<double,ll> p2) { return p1.first>p2.first; }

int main() {
    ll n, capacity;
    cin>>n>>capacity;

    vector<ll> value(n);
    vector<ll> weight(n);

    for(ll i=0; i<n; i++) {
        cin>>value[i]>>weight[i];
    }

    vector<pair<double,ll> > value_per_weight(n);

    for(ll i=0;i<n;i++) {
        value_per_weight[i].first = ((double)value[i]/weight[i]);
        value_per_weight[i].second = i;
    }
    sort(value_per_weight.begin(), value_per_weight.end(), sorted);
    double profit;
    for(ll i=0;i<n;i++) {
        if(capacity>=weight[value_per_weight[i].second]) {
            capacity-=weight[value_per_weight[i].second];
            profit+=value[value_per_weight[i].second];
        }
        else {
            profit+=value_per_weight[i].first*capacity;
            break;
        }
    }
    cout.precision(10);
    cout<<profit<<endl;
}
