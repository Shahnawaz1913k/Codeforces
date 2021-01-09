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
    vector<double> p(n), x(n), y(n), res(n);
    pan(i,n)
        cin >> p[i];
    pan(i,n)
        cin >> x[i];
    pan(i,n)
        cin >> y[i];
    pan(i,n){
        res[i] = ( (p[i]*x[i])-((1-p[i])*y[i]));
    }
    sort(res.begin(), res.end(), greater<double>());
    double sum = 0;
    ll i = 0;
    while(m--){
        if(res[i] > 0)
            sum += res[i];
        else
            break;
        i++;
    }
    cout << fixed << setprecision(2) << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tst = 1;
    //cin >> tst;
    while(tst--)
        solve();
    return 0;
}
