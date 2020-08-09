#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100005];
ll neg[100005];
deque<ll>v;

int main()
{
    ll t,n,i,l,j=0;
    cin>>t;
    while(t--)
    {
        cin>>n;

        j=1;
        int k=1;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&arr[i]);
        }
         sort(arr+1,arr+n+1);


        int z=1;
        j=1;
        k=n;


        for(i=1;i<=n ; i++)
        {
           if(j<k)
           {
               v.push_front(arr[j]);
               j++;
           }
           if(k>=j)
           {
               v.push_front(arr[k]);
               k--;
           }
           if(k<j && j>=k)
           {
               break;
           }
        }

        for(i=0;i<v.size();i++)
        {
            printf("%lld ",v[i]);
        }
        printf("\n");
        v.clear();


// 8 8 5 5 5 -2 -1 0 6 8


    }

}
