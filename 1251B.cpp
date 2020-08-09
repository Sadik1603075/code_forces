#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>v;

int main()
{
    ll t,n,i,k;
    string s;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);
        ll odd =0,evengood=0,evenbad=0,zero=0;
        k = n;
        while(k--)
        {
            zero=0;

            cin>>s;
            if(s.size()%2==1)
                odd++;
            else
            {
                for(i=0;i<s.size();i++)
                    if(s[i]=='0')
                        zero++;

                if(zero%2==0)
                    evengood++;
                else
                    evenbad++;
            }
            //v.push_back(s);
        }
        if(odd)
        {
            printf("%lld\n",n);
        }
        else
        {
            if(evenbad%2==1)
              cout<<n-1<<endl;
            else
                cout<<n<<endl;
        }
    }
}
