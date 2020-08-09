#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[200005];
ll wi[200005];

int main()
{
    ll n,t,i,j,k,sum=0;
    cin>>t;

    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        sum=0;

        for(i=0; i<n; i++) scanf("%lld",&arr[i]);
        for(i=0; i<k; i++) scanf("%lld",&wi[i]);

        sort(arr,arr+n);
        sort(wi,wi+k);

        for(i=0,j=n-1;i<k;i++,j--)
        {
            if(wi[i]==1) sum += arr[j]*2;
            else sum += arr[j];
            wi[i]--;
        }
        reverse(wi,wi+k);

        ll indx=0;
        for(i=0;i<k;i++)
        {
            if(wi[i]==0) break;
            sum += arr[indx];
            indx += wi[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}


/*
for(i=1; i<=k; i++)
        {
            scanf("%lld",&wi[i]);
            if(wi[i]==1)
                c++;
        }

        ll sum=0;
        if(pos.size()>0)
            for(i=1; i<=c; i++)
            {
                if(pos.size()==0)
                {
                    c-=(i-1);
                    break;
                }
                ll p = pos.back();
                pos.pop_back();
                c1++;

                sum += p+p;
            }

        if(n-c==0)
        {
            cout<<sum<<endl;
            continue;
        }

        ll sum1=LONG_MAX;
        ll x = neg.size();

        for(i=k; i>c; i--)
        {
            if(neg.size()>0)
            {
                sum1=neg.front();
                sum += sum1;
                wi[i]--;
                neg.pop_front();

                if(wi[i]>1)
                while(wi[i]!=1)
                {
                    if(neg.size()==0)
                        break;
                    wi[i]--;
                    neg.pop_front();
                }
            }
            else
                break;
        }
        ll z=0;
        if(neg.size()>0)
        {
            for(i=k; i>c; i--)
            {
                c1++;
                if(neg.size()==0)
                    break;

                sum += neg.front();
                neg.pop_back();
                wi[i]--;
                if(wi[i]==0)
                    z++;
            }

            if(c1==n)
            {
                cout<<sum<<endl;
                continue;
            }

        }
        ll z2=0;
        ll xx=0;
        for(i=c+1; i<=k-z; i++)
        {
            x = pos.back();
            sum +=x;
            pos.pop_back();
            wi[i]--;

            if(wi[i]>0)
            xx ++;
        }

        for(i=1;i<=xx;i++)
        {
            x = pos.front();
            sum +=x;
            pos.pop_front();
        }
        cout<<sum<<endl;
*/
