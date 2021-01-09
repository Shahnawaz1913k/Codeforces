#include<bits/stdc++.h>
using namespace std;;
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


int solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ma = 0;
    for(ll i = 1; i < n; i++) if(a[i] > a[i-1]) ma += a[i] - a[i-1];
    cout << ma << endl;
}

int main(){
    solve();
    return 0;
}
