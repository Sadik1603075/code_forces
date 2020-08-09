#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[105];

int main()
{
    ll t,n,i,j;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        n= s.size();
        ll zero=0;
        ll one=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
               one ++;
            }
            else
                zero++;
        }
        if(one==n || zero==n)
        {
            printf("NET\n");
        }
        else
        {
            ll x= min(zero,one);
            if(x%2)
            {
                printf("DA\n");
            }
            else
                printf("NET\n");
        }



    }
    return 0;
}



