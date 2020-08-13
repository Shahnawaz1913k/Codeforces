#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, f = 0;
    cin >> n;
    char a[n];
    cin >> a[0];
    ll cnt = (a[0] == 'f');
    for(ll i = 1; i < n; i++){
        cin >> a[i];
        if(a[i-1] == 'f') {if(a[i] == 'f') ++f;}
        else {
           
        }
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
