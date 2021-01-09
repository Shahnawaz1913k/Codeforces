#include <bits/stdc++.h>

using namespace std;

#define pan(i,n) for(ll i=0;i<n;i++)
#define pans(i,n,a) for(ll i=a;i<n;i++)
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define INF INT_MAX
#define PI 3.141592653
#define inf 100007
#define pll pair<ll,ll>
#define pii pair<int,int>

vl v[1000050];

void solve(){
    ll n, d;
    cin >> n >> d;
    vl arr(n);
    pan(i,n){
        cin >> arr[i];
        v[arr[i]].pb(i);
    }
    while(d--){
        ll price;
        cin >> price;
        ll idx = 0;
        vector<pll> p;
        pan(i,n){
            idx = upper_bound(v[arr[i]+price].begin(), v[arr[i]+price].end(), i)-v[arr[i]+price].begin();
            if(idx < v[price+arr[i]].size())
                p.pb({v[arr[i]+price][idx], -i});
        }
        sort(p.begin(), p.end());
        if(!p.size())
            cout << -1 ;
        else
            cout << -p[0].second+1 << " " << p[0].first+1;
        if(d)
            cout << ",";
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tst = 1;
    //cin >> tst;
    while(tst--)
        solve();
    return 0;
}


