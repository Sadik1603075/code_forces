#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,t,n,k,l;

    cin>>t;
    string a,b,c;

    while(t--)
    {
        cin>>a>>b>>c;

        l = a.size();
        int ans=1;
        for(i=0;i<l;i++)
        {
            if(c[i]==a[i])
            {
                b[i] = c[i];
            }
            else if(c[i]==b[i])
            {
                a[i] = c[i];
            }
            else
            {
                ans=0;
            }
            if(ans==0)
            {
                break;
            }
        }

        if(a==b && ans==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

}


