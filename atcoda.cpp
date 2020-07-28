#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(int x){
    ll n;
    cin >> n;
    string in, out;
    cin >> in >> out;
    string s[n];
    for(ll i = 0; i < n; i++){
        for(ll j = i; j < n; j++){
            if(i == j) {
                //s[i][j] = (out[i] == 'Y' ? 'Y':'N');
                s[i][i] = 'Y';
                continue;
            }
            s[i][j] = (out[j-1] == 'Y' && s[i][j-1] == 'Y' && in[j] == 'Y' ? 'Y':'N');
        }
        for(ll j = i-1; j >= 0; --j){
            s[i][j] = (out[j+1] == 'Y' && s[i][j+1] == 'Y' && in[j] == 'Y' ? 'Y':'N');
        }
    }
    cout << "Case #"<<x+1<<":"<<endl;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++) cout << s[i][j];
        cout << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;
  //while(t--)
  for(int i = 0; i < t; i++)
  solve(i);
  return 0;
}
