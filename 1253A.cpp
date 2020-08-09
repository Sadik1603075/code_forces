#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];

vector<int>v;
int main()
{
    int i,j,k,l,m,n,t,c=0;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        cin>>n;
        c=0;
        int ok=1;
        set<int>s;
         v.clear();

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=1;i<=n;i++)
        {
            scanf("%d",&b[i]);

            if(a[i]!=b[i])
            {
                c++;

                l=b[i]-a[i];

                if(l<0)
                    ok=0;

                s.insert(l);
                v.push_back(i);
            }

        }

        if(s.size()>1)
            ok=0;
        for(i=v.size()-1;i>=1;i--)
        {
            if(v[i]-v[i-1]!=1)
            {
                ok=0;
                break;
            }

        }

        if(ok==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }


    return 0;
}

