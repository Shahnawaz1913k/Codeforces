#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll rem = k, i = n-1;
    for(; i >= 0; --i){
        if(rem >= a[i]) rem-=a[i];
        else{
            if(!(--m)) break;
            else rem = k-a[i];
        }
    }
    cout << n - (i+1) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}