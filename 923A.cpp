#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll p[1000100];
void soe(){
    p[1] = 10;
    for(ll i = 2; i <= 1000100; ++i){
        if(p[i]) continue;
        for(ll j = 2*i; j <= 1000100; j+=i) p[j] = i;
    }
}

void solve(){
    ll n, mi = 9999999999;
    cin >> n;
    for(ll j = n - p[n] + 1; j <= n; ++j) mi = min(mi, j - p[j] + 1);
    cout << mi << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  soe();
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}