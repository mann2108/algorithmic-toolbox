#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll max1_index;
    ll max1_value = LLONG_MIN;
    ll max2_index;
    ll max2_value = LLONG_MIN;
    for(ll i=0;i<n;i++){
        if(max1_value<a[i]){
            max1_value = a[i];
            max1_index = i;
        }
    }
    for(ll i=0;i<n;i++){
        if(i==max1_index)continue;
        if(max2_value<a[i]){
            max2_value = a[i];
            max2_index = i;
        }
    }
    cout<<a[max1_index]*a[max2_index]<<endl;
}
