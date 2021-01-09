#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(int arr1[], int arr2[], int len1, int len2, int k){
   sort(arr1, arr1+len1);
   sort(arr2, arr2+len2);
   int x = 0, y = 0;
   for(int i = 0; i < len1; i++) if(arr1[i] > k) ++x;
   for(int i = 0; i < len2; i++) if(arr2[i] < k) ++y;
   return max(x, y);
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  int l1, l2, k;
  cin >> l1 >> l2 >> k;
  int a1[l1], a2[l2];
  for(ll i = 0; i < l1; i++) cin >> a1[i];
  for(ll i = 0; i < l2; i++) cin >> a2[i];
  int result = solve(a1, a2, l1, l2, k);
  cout << result << endl;
  return 0;
}
