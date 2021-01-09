#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int element(int a[], int n){
  int cnt = 1;
  int b[n] = {0};
  for(int i = 0; i < n; ++i){
      if(b[i]) continue;
      cnt +=cnt;
      for(ll j = i; j < n; j+nt) b[j] = 
  }
}

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  int result = element(a, n);
  cout <<  << endl;
  return 0;
}