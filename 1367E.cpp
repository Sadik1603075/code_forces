#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll arr[30];
vector<ll>v;

int main()
{
    ll n,t,k,i,j,m,m1;
    cin>>t;
    string s;

    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        memset(arr,0,sizeof(arr));
        v.clear();

        for(i=0;i<n;i++)
        {
            arr[s[i]-'a']++;
        }
        ll c=0;

        for(i=0;i<26;i++)
        {
            if(arr[i]>0)
                c++;
        }
        m1=c;

        if(c==1)
        {
            printf("%lld\n",n);
            continue;
        }

        for(i=1;i*i<=k;i++)
        {
          if(k%i==0)
          {
              v.push_back(i);
              v.push_back(k/i);
          }
        }

        sort(v.begin(),v.end());

       m = v.size()-1;
       ll mx=0;

       for(i=m;i>=1;i--)
       {
           c=0;
           for(j=0;j<26;j++)
           {
               if(arr[j]>=v[i])
                    c++;
           }
           mx= max(mx,c*v[i]);
       }

       while(1)
       {
           if(k%m1==0)
           {
               mx=max(mx,m1);
               break;
           }
           m1--;
       }
       if(n%k==0 && n/k==2)
       {
           i = n/k;
            c=0;
           for(j=0;j<26;j++)
           {
               if(arr[j]>=i)
                    c++;
           }

           mx= max(mx,c*i);

       }

       cout<<mx<<endl;




    }
}
