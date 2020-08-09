#include<bits/stdc++.h>
using namespace std;
vector<int>v[1001];
string s1[1001],s2[1001];

void make()
{
   for(int i=1; i<=1000; i++)
        {
            for(int j=1; j<=i; j++)
            {
                s1[i] +="U";
                s2[i] +="R";
            }
        }
}


int main()
{
    int t,i,j,k,l,m=0,n,u,v1,c,x,y,x1;
    cin>>t;
    make();
    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);
        m=0;
        c=0;
        x=0;
        y=0;
        x1=0;
        string s;
        for(i=1; i<=n; i++)
        {
            scanf("%d%d",&u,&v1);
            v[u].push_back(v1);
            m = max(m,u);
        }

        for(i=0; i<=m; i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        c=0;

        for(i=0; i<=m; i++)
        {
            if(v[i].empty())
            {
                continue;
            }
            else
            {
                    x = i - x;
                    s+= s2[x];
                    x = i;
                for(j=0; j<v[i].size(); j++)
                {
                    l= v[i][j] -y;
                    if(l<0)
                    {
                        x1=1;
                        break;
                    }
                    s+=s1[l];
                    c++;
                    y = v[i][j];
                }
            }
            if(x1)
                break;
        }

        if(x1==1 || c !=n)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            cout<<s<<endl;
        }
        s.clear();
        for(i=0;i<=m;i++)
            v[i].clear();
    }
}
