#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct node{
    int x, t, id;
} a[200020];

bool cmp(node x, node y) {return x.t < y.t;};

void solve(){
    ll n, t;
    cin >> n >> t;
    for(ll i = 1; i <= n; ++i) cin >> a[i].x >> a[i].t, a[i].id = i;
    sort(a+1, a+n+1, cmp);
    ll l = 1, r = n, mid = 0, an = 0, Ans[200020], ans[200020], no;
    while(l <= r){
        mid = (l+r)>>1;
        ans[0] = 0, no = 0;
        for(ll i = 1; i <= n; ++i) if(a[i].x >= mid && no+a[i].t <= t){
            no += a[i].t, ans[++ans[0]] = a[i].id;
        }
        if(ans[0] >= mid){
            l = mid+1, an = mid;
            Ans[0] = mid;
            for(ll i = 1; i <= mid; ++i) Ans[i] = ans[i];
        } else r = mid-1;
    }
    cout << an << endl  << Ans[0] << endl;
    for(ll i = 1; i <= Ans[0]; ++i) cout << Ans[i] << " ";
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}