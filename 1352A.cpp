#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1005];
vector<ll>v;

int main()
{
    ll t,n,i,j,k;
    cin>>t;

    while(t--)
    {
        cin>>n;
        i =1;
        v.clear();
         while(n!=0)
         {
             j = n%10;
             n /=10;
             k = j*i;
             i*=10;

             if(k!=0)
             v.push_back(k);
         }

         cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
