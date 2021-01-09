#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
 
void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}


void rotateeasy(string s){
    map<string, int> mp;
    for(ll i = 0; i < s.size(); i++){
        string l = s;
        leftrotate(l, i+1);
        mp[l]++;
        reverse(l.begin(), l.end());
        mp[l]++;
    }
    cout << mp.size() << endl;
}

int main(){
  string s;
  cin >> s;
  rotateeasy(s);
  return 0;
}
