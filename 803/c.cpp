#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k; 
    cin >> k >> n;
    vector<ll> v;
    for(ll i = sqrt(k); i >= 1; i--)if(k%i == 0){
        //cout << i << " " << k/i << endl;
        if(i*i == k) v.push_back(i);
        else v.push_back(i), v.push_back(k/i);
    }
    sort(v.begin(), v.end(), greater<ll>());
    for(auto &i: v) if((k/i)/n >= (n+1)/2){
        ll xx = k - i*n*(n-1)/2;
        if((n-1)*i >= xx) continue;
        if(xx%i == 0){
            for(ll j = 1; j < n; j++) cout << j*i << " ";
            cout << xx;
            return;
        }
    }
    cout << -1 << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
