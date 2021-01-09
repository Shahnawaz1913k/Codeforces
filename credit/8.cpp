#include <bits/stdc++.h>

using namespace std;

#define pan(i,n) for(int i=0;i<n;i++)
#define pans(i,n,a) for(int i=a;i<n;i++)
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define INF INT_MAX
#define PI 3.141592653
#define inf 100007
#define pll pair<ll,ll>
#define pii pair<int,int>

void solve(){
    ll n, m;
    cin >> n >> m;
    vl s(m);
    pan(i,m)
        cin >> s[i];
    ll table[n+1][m];
    pan(i,m)
        table[0][i] = 1;
    pans(i,n+1,1){
        pan(j,m){
            ll x = (i-s[j] >= 0) ? table[i-s[j]][j] : 0;
            ll y = (j >= 1) ? table[i][j-1] : 0;
            table[i][j] = x+y;
        }
    }
    cout << table[n][m-1] << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tst = 1;
    //cin >> tst;
    while(tst--)
        solve();
    return 0;
}
