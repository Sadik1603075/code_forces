#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

ll solve(ll n)
{
    ll mn =10;
    ll mx=0;
    while(n!=0)
    {
        mn = min(mn,n%10);
        mx = max(mx,n%10);
        n/=10;
    }
    return mn*mx;
}


int main()
{
    ll t,n,i,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        k--;
        ll sum =n;
        for(i=1;i<=k;i++)
        {
            ll endd = solve(sum);
            if(endd>0)
                sum+=endd;
            else
                break;
        }
        cout<<sum<<endl;
    }
    return 0;
}
