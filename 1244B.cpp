#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i,j,k,l,a,b,d,x,t,dir,ans,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        a = n,b=0;

        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                a=i;
                break;
            }
        }
        ll sum1 = 2*(n-a);
        b=0;
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                break;
            }
            else
                b++;
        }

        ll sum2= 2*(n-b);
        ll ans = n;
        ans = max(ans,sum1);
        ans = max(ans,sum2);
        cout<<ans<<endl;

    }
    return 0;
}
