#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for(ll i = 0; i < n; ++i) a[i] = -1;
    while(m--){
        ll t, x, y;
        cin >> t >> x >> y;
        for(ll i = x; i < y; ++i){
            if(a[i] == -1 || a[i] == t) a[i] = t;
            else {
                cout << "NO"; return;
            }
        }
        // for(ll i =  0; i < n; ++i) cout << a[i] << " ";
        // cout << endl;
    }
    cout << "YES" << endl << 2000 << " ";
    a[0] = 2000;
    for(ll i = 1; i < n; ++i){
        if(a[i] == -1) a[i] = a[i-1];
        else if(a[i] == 1) a[i] = a[i-1]+1;
        else a[i] = a[i-1]-1;
        cout << a[i] << " ";
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
//   int t;cin>>t;while(t--)
  solve();
  return 0;
}


int* solve(){
    int n = numUsers, m = numGenres;
    map<string, vector<string> > a = userBooksListenedTo, b = bookGenres;
    map<string, string> book;
    for(auto &x: b){
        string genre = b.first;
        for(auto &k: b.second) book[k] = genre;
    }
    map<string, vector<string> > res;
    for(auto &x: a){
        string name = x.first
        vector<string> v;
        map<string, int> mp;
        int ma = 0;
        for(auto &k: x.second) {
            mp[book[k]]++;
            ma = max(ma, mp[book]);
        }
        for(auto &k: mp) if(k.second == ma) v.push_back(k.first);
        res[x.first] = v;
    }
    return book;
}