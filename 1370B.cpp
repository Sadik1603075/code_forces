#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[2005];
deque<ll>zor,bizor;



int main()
{
    ll i,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll z=0,b=0;

        for(i=1;i<=2*n;i++)
        {
            scanf("%lld",&arr[i]);

            if(arr[i]%2==0)
                {
                    z++;
                    zor.push_back(i);
                }
            else
                {
                    b++;
                    bizor.push_back(i);
                }
        }

        if(z%2==1)
        {
            z--;
            b--;
            zor.pop_back();
            bizor.pop_back();

            while(zor.size())
            {
                ll p = zor.front();
                zor.pop_front();
                ll q = zor.front();
                zor.pop_front();
                cout<<p<<" "<<q<<endl;
            }
             while(bizor.size())
            {
                ll p = bizor.front();
                bizor.pop_front();
                ll q = bizor.front();
                bizor.pop_front();
                cout<<p<<" "<<q<<endl;
            }

        }
        else
        {
            if(zor.size()>bizor.size())
            {
                zor.pop_front();
                zor.pop_front();
            }
            else
            {
                bizor.pop_front();
                bizor.pop_front();
            }

             while(zor.size())
            {
                ll p = zor.front();
                zor.pop_front();

                ll q = zor.front();
                zor.pop_front();

                cout<<p<<" "<<q<<endl;
            }
             while(bizor.size())
            {
                ll p = bizor.front();
                bizor.pop_front();

                ll q = bizor.front();
                bizor.pop_front();

                cout<<p<<" "<<q<<endl;
            }
        }


    }
}

