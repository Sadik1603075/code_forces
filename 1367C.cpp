#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1003];
deque<ll>v;


int main()
{
    ll n,t,i,k,gap,l,len,p,q;
    cin>>t;
    string s,s1;

    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        s1 = "1"+s+"1";
        s=s1;
        ll c=0,sum=0;

        for(i=1;i<=n;i++)
            {
                if(s[i]=='1')
                {
                    v.push_back(i);
                    v.push_back(i);
                }
            }
        v.push_front(0);
        v.push_back(n+1);



        l = k+1;
        while(v.size())
        {
            p = v.front();
            v.pop_front();
            q = v.front();
            v.pop_front();


            if(p==0 && q == n+1)
            {
                sum += (n/l);
                if(n%l)
                    sum++;
            }
            else if( p ==0 )
            {
                 len = q-1;
                sum += len/l;
            }
            else if (q==n+1)
            {
                len = q-p-1;
                sum += len/l;
            }
            else
            {
                len = q-p-1;
                len -= 2*k;
                if(len<=0)
                    continue;

                sum += (len/l);
                if(len%l)
                    sum++;
            }

        }
        cout<<sum<<endl;
    }
    return 0;
}

