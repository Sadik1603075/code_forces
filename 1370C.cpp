#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[2005];
deque<ll>zor,bizor;

vector<ll>v;

int main()
{
    ll i,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();

        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i%2==1)
                    v.push_back(i);
                ll x= n/i;

                if(x%2==1)
                {
                    v.push_back(x);
                }
            }
        }
        if(n==1)
        {
            cout<<"FastestFinger"<<endl;
                continue;
        }
        if(n==2)
        {
            cout<<"Ashishgup"<<endl;
                continue;
        }

        if(n%2==1)
            {
                cout<<"Ashishgup"<<endl;
                continue;
            }


        if(v.size()==0)
        {
            cout<<"FastestFinger"<<endl;
                continue;

        }

        if(v.size()==1)
        {
            ll p = n/v[0];
            if(p==2)
            {
                 cout<<"FastestFinger"<<endl;
                continue;
            }
            else
            {
                 cout<<"Ashishgup"<<endl;
                 continue;
            }
        }

        cout<<"Ashishgup"<<endl;

    }
}


