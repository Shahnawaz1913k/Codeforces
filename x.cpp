#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char flip(char x){
    if(x == '0') return '1';
    return '0';
}

void solve(){
    ll n, x;
    cin >> n >> x;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    string st[n];
    if(n == 2){
        string s1 = bitset<40>(a[0]).to_string();
        string s2 = bitset<40>(a[1]).to_string();
        for(ll i = 0; i < 40; i++) if(s1[i] == '1'){
            --x;
            s1[i] = '0';
            s2[i] = flip(s2[i]);
            if(!x) break;
        }
        if(x){
            if(x%2) {
                s1[0] = '1';
                s2[1] = flip(s2[1]);
            }
        } 
        st[0] = s1, st[1] = s2;
    } else {
        map<ll, ll> mp;
        ll indx = n-1;
        for(ll i = 0; i < n-1; i++){
        string s = bitset<40>(a[i]).to_string();
        for(ll j = 0; j < 40; j++) if(s[j] == '1'){
            if(mp[j]) --mp[j];
            else ++mp[j], --x;
            s[j] = '0';
            if(!x) break;
        }
        st[i] = s;
        if(!x) { indx = i+1; break; }
        }
        for(ll i = indx; i < n; i++){
            string s = bitset<40>(a[i]).to_string();
            for(ll j = 0; j < 40; j++) if(s[j] == '1' && mp[j] > 0){
                --mp[j];
                s[j] = '0';
            }
            st[i] = s;
        }
    }
    for(ll i = 0; i < n; i++) cout << stoll(st[i], 0, 2) << " ";
    cout << endl;
}

int main(){
    ll t = 1;
    cin >> t;
    while(t--)
    solve();
    return 0;
}
