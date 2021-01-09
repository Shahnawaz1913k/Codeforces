#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct query{
    int t, l, r;
} b[200020];

void solve(){
    int n, m, q, x;
    cin >> n >> q >> m;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < q; i++) cin >> b[i].t >> b[i].l >> b[i].r, --b[i].l, --b[i].r;
    while(m--){
        cin >> x; --x;
        for(int i = q-1; i >= 0; --i) if(b[i].l <= x && x <= b[i].r){
            if(b[i].t == 1) x = (x == b[i].l ? b[i].r : x-1);
            else x = b[i].r - (x-b[i].l);
        }
        cout << a[x] << " ";
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}