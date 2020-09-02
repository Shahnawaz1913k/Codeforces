#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    if(n == 0) cout << "0 1\n 0 "<< m << "\n 0 0\n 0 " << m-1 << endl;
    else if(m == 0) cout << "1 0\n " << n << " 0 \n 0 0\n" << n-1 << " 0\n";
    else if(m >= n){
        if(2*(sqrt(m*m + (n-1)*(n-1))) > m + sqrt(m*m + n*n))
        cout << "1 0\n" << n << " " << m << "\n 0 0 \n" << n-1 << " " << m ;
        else cout << n << " " << m << "\n 0 0\n 0 "<< m << endl << n << " 0\n";
    } else {
        if(2*(sqrt((m-1)*(m-1) + n*n)) > n + sqrt(m*m + n*n))
        cout << "0 1\n" << n << " " << m << "\n 0 0 \n" << n << " " <<m-1;
        else cout << n << " " << m << "\n 0 0 \n" << n << " 0\n 0 " << m;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
