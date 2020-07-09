#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, cnt = 0;
    cin >> n;
    string s, t;
    cin >> s;
    ll flag = 10;
    string st;
    for(ll i = n-1; i >= 0;--i){
        if(s[i] == '0'){ 
           break;
        } else t+='1';
    }
    flag = 10;
    for(ll i = 0; i < n; i++){
        if(s[i] == '1') {
            break;
        } else st += '0';
    }

    flag = 0;
    for(ll i = 0; i < n-1; i++) if(s[i] == '1' && s[i+1] == '0') ++flag;
    if(flag) t = '0'+t;

    cout << st + t << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
