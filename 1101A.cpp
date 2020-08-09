#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ThxDem=b;i<ThxDem;++i)
#define pb push_back
#define ALL(s) s.begin(),s.end()
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define SZ(n) ((int)(n).size())
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

int main(){
  int t; cin >> t;
  while(t--){
    ll l,r,x; cin >> l >> r >> x;
    r++;
    l--;
    ll asd = (r+x-1)/x;
    if(l >= x){
      ll asd2 = l/x;
      cout << x << "\n";
    }
    else{
      cout << x*asd << "\n";
    }
  }
}
