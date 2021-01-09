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

void solve(ll tst){
    ll n;
    cin >> n;
    ll a[n][n];
    pan(i,n)
        pan(j,n)
            cin >> a[i][j];
    ll res = 1;
    pan(i,n){
        ll sumr = 0, sumc = 0;
        pan(j,n){
            if(j == i)
                continue;
            sumr += a[i][j];
            sumc += a[j][i];
        }
        res &= (sumr == sumc);
    }
    if(!res)
        cout << "Impossible";
    else
        cout << "Possible";
    if(tst)
        cout << ",";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll tst = 1;
    cin >> tst;
    while(tst--)
        solve(tst);
    return 0;
}
