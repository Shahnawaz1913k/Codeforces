#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    ll a[100] = {0}, b[100] = {0}, c[100] = {0};
    string sa, sb, sc;
    cin >> n >> sa >> sb >> sc;
    m = sa.size();
    for(ll i = 0; i < m; ++i) a[sa[i] - 'A']++, b[sb[i] - 'A']++, c[sc[i] - 'A']++;
    ll cnta[100] = {0}, cntb[100] = {0}, cntc[100] = {0}, x = 0, y = 0, z = 0;
    for(ll i = 0; i <= 'z' - 'A'; i++){
        cnta[i] = a[i], cntb[i] = b[i], cntc[i] = c[i];
        cnta[i] = min(cnta[i]+n, m);
        cntb[i] = min(cntb[i]+n, m);
        cntc[i] = min(cntc[i]+n, m);
        if(a[i] == m && n == 1) --cnta[i];
        if(b[i] == m && n == 1) --cntb[i];
        if(c[i] == m && n == 1) --cntc[i];
    }
    x = *max_element(cnta, cnta + 100);
    y = *max_element(cntb, cntb + 100);
    z = *max_element(cntc, cntc + 100);
    // cout << x << " " << y << " " <<z << endl;
    if(x > max(y, z)){
        cout << "Kuro" << endl; return;
    } else if(y > max(x, z)){
        cout << "Shiro" << endl; return;
    } else if(z > max(x, y)){
        cout << "Katie" << endl; return;
    } else cout << "Draw" << endl;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}