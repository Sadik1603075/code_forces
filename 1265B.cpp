#include<bits/stdc++.h>
using namespace std;

int pos[2*100005];

int main()
{
    int i,j,k,l,m,n,t,r;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%d",&l);

            pos[l-1] =i;
        }
        string ans;
        l =n;
        r =0;
        for(i=0;i<n;i++)
        {
            l = min(l,pos[i]);
            r = max(r,pos[i]);

            if(r-l==i)
            {
                ans +='1';
            }
            else
            {
                ans +='0';
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
