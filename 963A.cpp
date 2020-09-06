#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll m = 1e9 + 9;

ll f(ll x, ll y){
    ll res = 1;
    x = x%m;
    while(y){
        if(y&1) res = (res*x)%m;
        x = (x*x)%m;
        y/=2;
    } return res;
}

void solve(){
    ll n, a, b, k;
    string s;
    cin >> n >> a >> b >> k >> s;
    ll p = (n+1)/k, cnt = 0;
    ll sum1 = f(f(a, m-2)*b%m, k);
    if(sum1 == 1) sum1 = p;
    else sum1 = f(sum1-1, m-2)*(f(sum1, n/k+1) - 1)%m;
    for(ll i = 0; i < k; i++){
        ll val = f(b, i)*f(a, n-i)%m;
        if(s[i] == '+') cnt = (cnt + val)%m;
        else cnt = (m + cnt - val)%m;
    }
    cnt = (cnt*sum1)%m;
    cout << cnt << endl;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}