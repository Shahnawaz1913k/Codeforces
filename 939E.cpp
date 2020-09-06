#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> v, pre;
double val = 0, ma = 0;

double f(ll x){
    double cnt = 1.0*v[v.size()-1] - (v[v.size() - 1] + pre[x])*1.0/(x+1);
    return cnt;
}

void check(){
    ll n = pre.size();
    if(n == 2) {cout << 0 << endl; return;}
    double val = 0;
    if(val > ma) ma = val;
    ll l = 1, h = v.size()-1, m1 = 0, m2 = 0;
    while(h - l > 3){
        m1 = l + (h-l)/3;
        m2 = (h+m1)/2;
        if(f(m1) > f(m2)) h = m2;
        else l = m1;
    }
        m1 = l + (h-l)/3;
        m2 = (h+m1)/2;
    cout << setprecision(10) << fixed << max({f(l), f(h), f(m1), f(m2)}) << endl;
}

void solve(){
    v.push_back(0), pre.push_back(0);
    ll n, cnt = 0;
    cin >> n;
    while(n--){
        ll x, y;
        cin >> x;
        if(x == 2) check();
        else {
            cin >> y;
            pre.push_back(pre[cnt++] + y);
            v.push_back(y); 
        }
    }
    for(ll i = 0; i < cnt; i++) cout << i << " " << f(i) << endl;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}
/*
11
1 1
1 2
1 3
1 4
1 5
1 6
1 7
1 8
1 9
1 10
2
*/