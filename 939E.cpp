#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> v, pre;
double val = 0, ma = 0;

double f(ll x){
    double xx = (pre[x] + v[v.size()-1])*1.0/(x+1);
    if(xx > ma) return xx;
    return 0.0;
}

void check(){
    ma = 0;
    if(v.size() == 2){
        cout << ma << endl; return;
    }
    ll l = 1, h = v.size()-2, mid = 0, cnt = 0;
    while(l<=h){
        mid = (l+h)/2;
        if(f(mid)) l = mid+1, cnt = mid;
        else r = mid-1;
    }
    cout << setprecision(10) << fixed << f(cnt) << endl;
}

void solve(){
    v.push_back(0), pre.push_back(0);
    ll n, cnt = 0;
    cin >> n;
    while(n--){
        ll x, y;
        cin >> x;
        if(x == 2) check();
        else cin >> y, pre.push_back(pre[cnt] + y), v.push_back(y), ++cnt;
    }
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}