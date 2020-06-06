#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct{
    
    int bit[500500];

    void add(int indx, int val){
        for(++indx; indx < 500500; indx += indx&-indx) bit[indx] += val;
    }

    void rangeAdd(int l, int r, int val){
        add(l, val); add(r + 1, -val);
    }

    int pointQuery(int indx){
        int ret = 0;
        for(++indx; indx > 0; indx -= indx&-indx) ret += bit[indx];
        return ret;
    }
} f;


void solve(){
    int n, m = 1; 
    cin >> n;
    double cnt = 0;
    cout << fixed << setprecision(14);
    while(n--){
        int x, y, z; 
        cin >> x;
        if(x == 1){
            cin >> y >> z;
            f.rangeAdd(1, y, z);
            cnt += y*z;
        } else if(x == 2){
            cin >> y;
            ++m;
            cnt+=y;
            f.rangeAdd(m, m, y);
        } else {
            int val = f.pointQuery(m);
            f.rangeAdd(m, m, -val);
            cnt -= val;
            --m;
        }
        cout << cnt*1.0/m << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
