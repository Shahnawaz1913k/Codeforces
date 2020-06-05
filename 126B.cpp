//https://codeforces.com/contest/126/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> zfun(string s){
    ll n = s.length();
    vector<ll> z(n);
    for(ll i = 1; i < n; ++i){
        ll j = z[i-1];
        while(j > 0 && s[i] != s[j]) j = z[j-1];
        if(s[i]== s[j])++j;
        z[i] = j;
    }
    return z;
}

void solve(){
    string s, t, st;
    cin >> s;
    t = s; reverse(t.begin(), t.end());
    vector<ll> z = zfun(s), rz = zfun(t);
    ll indx = -1, n = s.length(), ma = 0;
    for(ll i = 0; i < n; i++){
        if(z[i] == rz[n-1-(i-(z[i]-1))] && z[i] > ma){
            indx = i; ma = z[i];
        }
    }
    if(indx == -1){
        cout << "Just a legend" << endl;
        return;
    }
    for(ll i = 0; i < z[indx]; i++) st+=s[i];
    cout << st << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
