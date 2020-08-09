#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,x;
    cin>>t;
    string s;
    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);
        int ans=0;
        cin>>s;
        m=0;
        l=0;

        if(n==1)
        {
            printf("0\n");
            continue;
        }

        for(x=0; x<n; x++)
        {
            if(s[x]!='P')
            {
                break;
            }
        }

        for(i=x; i<n-1; i++)
        {
            m=0;
            for(j=i; j<n-1; j++)
            {
                if(s[j]=='A')
                {
                    if(s[j+1]=='P')
                    {
                        s[j+1] = 'A';
                        j++;
                        l=1;
                    }
                }
            }
            for(j=i+1; j<n; j++)
            {
                if(s[j]=='P')
                {
                    m++;
                }
            }

            if(m==0)
                break;

        }
        //cout<<i<<" "<<x<<endl;
        if(l)
            printf("%d\n",i-x+1);
        else
            printf("0\n");
    }
}
