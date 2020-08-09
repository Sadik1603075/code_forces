#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    int n,t,i,a,b;
    cin>>t;
    while(t--)
    {
      cin>>a>>b;
       i = a/b;
       if(i*b==a)
       {
           cout<<0<<endl;
           continue;
       }
       i++;
       ll ans = i*b - a;


       cout<<ans<<endl;
    }

    return 0;
}
