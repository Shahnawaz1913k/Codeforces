#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<pair<ll, pair<ll, ll> > > p;

int check(ll n, ll k, ll t){
    ll cnt = 0, ct = 0;
    for(ll i = 0; i < n; ++i)if(p[i].second.first >= k){
        ct += p[i].first;
        ++cnt;
        if(cnt == k) break;
    }
    return (ct <= t && cnt == k);
}

void solve(){
    ll n, t;
    cin >> n >> t;
    ll x, y;
    for(ll i = 0; i < n; ++i) cin >> x >> y, p.push_back({y, {x, i+1}});
    sort(p.begin(), p.end());
    ll l = -1, h = n+1, mid, res = n+100;
    while(l <= h){
        mid = (l+h)/2;
        // cout << mid << " " << check(n, mid, t) << endl;
        if(check(n, mid, t)) l = mid+1, res = mid;
        else h = mid-1;
    }
    ll cnt = 0, ct = 0;
    vector<ll> v;
    for(ll i = 0; i < n; ++i)if(p[i].second.first >= res){
        v.push_back(p[i].second.second);
        ++cnt;
        if(cnt == res) break;
    }
    cout << v.size() << endl << v.size() << endl;
    for(auto &i: v) cout << i << " ";
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}