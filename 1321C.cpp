#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1001];
vector< pair<ll,ll> >v;

int main()
{
    ll t,i,n,l,r;
    cin>>n;
    string s;
    cin>>s;



    for(i=0;i<n;i++)
    {
        l = i;
        r = i;
        for(j=i;j<n;j++)
        {
            if(s[j]==s[j+1] || s[j]+1 == s[j+1])
                r++;
            else
                break;
        }
        v.push_back(make_pair(l,r));
    }
}
