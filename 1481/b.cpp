#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll h[n];
    for(ll i = 0; i < n; i++) cin >> h[i];
    ll cnt = 0, pos = 0;
    while(pos < n - 1){
        if(h[pos] >= h[pos+1]) ++pos;
        else {
            ++cnt;
            ++h[pos];
            //cout << "at " << pos << endl;
            if(cnt == k){
                cout << pos + 1 << endl;
                return;
            }
            pos = 0;
        }
    }
   cout << -1 << endl; 
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
