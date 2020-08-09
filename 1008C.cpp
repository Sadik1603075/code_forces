#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[100005];
multiset<ll>ms;

int main()
{
    ll i,j,c=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&arr[i]);
        ms.insert(arr[i]);
    }
    multiset<ll>::iterator it;

    for(i=0;i<n;i++)
    {
        it = ms.upper_bound(arr[i]);
        if(it!=ms.end())
        {
            c++;
            ms.erase(it);
        }
    }
    cout<<c<<endl;
    return 0;
}

