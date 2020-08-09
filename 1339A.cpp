#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100005];
vector<ll>pow2;
deque<ll>v;

int main()
{
    ll t,n,i,l,j=0;
    cin>>t;

    pow2.push_back(0);
    pow2.push_back(1);
    ll mul=2;
    for(i=2; i<=40; i++)
    {
        pow2.push_back(mul);
        mul*=2;
    }
    for(i=1;i<=40;i++)
    {
        pow2[i] = pow2[i]+pow2[i-1];
    }



    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&l);
            arr[i]= l;
        }
        ll sum =0,diff;
        std::vector<ll>::iterator low,up;
        for(i=2; i<=n; i++)
        {
            if(arr[i]<arr[i-1])
             {
                 diff = abs(arr[i]-arr[i-1]);
                 if(pow2[sum]>=diff)
                 {

                    low=lower_bound (pow2.begin(), pow2.end(), diff);
                    l= low-pow2.begin();
                    arr[i] +=pow2[l];
                 }
                 else
                    arr[i] +=pow2[sum];
             }
            if(arr[i]<arr[i-1])
            {
                    diff = abs(arr[i]-arr[i-1]);
                    low=lower_bound (pow2.begin(), pow2.end(), diff);
                    l= low-pow2.begin();


                    if(l>sum)
                    {
                        sum +=(l-sum);
                        l = sum;
                    }
                    else{
                        sum++;
                        l = sum;
                    }
                    arr[i] +=arr[i-1];

            }
        }

        cout<<sum<<endl;

// 8 8 5 5 5 -2 -1 0 6 8
    }

}

