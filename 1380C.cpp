#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<ll,ll>frequency;
ll arr[100005];



int main()
{
    ll t,i,n,j,val,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        j=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&val);
            frequency[val]++;
            if(frequency[val]==1)
            {
                j++;
                arr[j] = val;
            }
        }
        ll sum=0,dorkar,ace;
        sort(arr+1,arr+1+j);


        for(i=j;i>=1;i--)
        {
            val = arr[i];


            if(val>=x)
            {
                sum +=frequency[val];
            }
            else
            {
                dorkar = x/val + (x%val==0 ? 0 : 1);

                if(frequency[val]>=dorkar)
                {
                    ace = frequency[val]/dorkar;
                    sum += ace;
                    frequency[val] -= dorkar*ace;
                    frequency[arr[i-1]] += frequency[val];
                }
                else
                {
                    frequency[arr[i-1]] += frequency[val];
                }
            }
        }
        cout<<sum<<endl;
        frequency.clear();

    }
    return 0;
}
