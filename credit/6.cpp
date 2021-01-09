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
#define pll pair<ll,ll>
#define pii pair<int,int>

void solve(){
    string s;
    getline(cin, s);
    string a = "";
    ll n = s.size();
    pan(i,n){
        if(s[i] != ' ')
            a += s[i];
    }
    n = a.size();
    ll c = ceil(sqrt(n*1.0)), r = floor(sqrt(n*1.0)), i = 0;
    if(r*c < n)
        r = c;
    string res = "";
    pan(k,c){
        for(ll j = k; j < n; j+=c){
            res += a[j];
        }
        if(k < c-1)
            res+=" ";
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int tst = 1;
    //cin >> tst;
    while(tst--)
        solve();
    return 0;
}
