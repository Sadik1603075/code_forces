#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005];
ll c[200005];
ll ans[30];

int main()
{
    ll t,n,m,i,j,l;
    string s;

    cin>>t;
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        cin>>s;
        l = s.size();

         memset(arr,0,sizeof(arr));
         memset(c,0,sizeof(c));
         memset(ans,0,sizeof(ans));


        for(i=1;i<=m;i++)
        {
            scanf("%lld",&j);
            j--;
            c[j]++;
        }
        arr[l] = 1;

        for(i=l-1;i>=0;i--)
        {
            arr[i] = arr[i+1] + c[i];
            ans[s[i]-'a'] += arr[i];
        }
        for(i=0;i<26;i++)
        {
           printf("%lld ",ans[i]);
        }
        printf("\n");


    }
}
