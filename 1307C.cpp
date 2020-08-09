#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll adj[100005][30];
ll adj1[100005][30];
ll up[100005],down[100005];
ll last[30];


int main()
{
    ll t,n,l,i,al,j,al2,m,m1;

    string s;
    cin>>s;
    l = s.size();
    m =m1=0;
    for(i=0,j=l-1;i<l;i++,j--)
    {
        al = s[i]-'a';
        al2 =s[j]-'a';
        last[al]++;
         for(ll j1=0;j1<26;j1++)
            {
                adj[i+1][j1] = adj[i][j1];
                adj1[j+1][j1] = adj1[j+2][j1];

                m = max(adj[i+1][j1],m);
                m1 = max(adj[j+1][j1],m1);
            }

        adj[i+1][al]++;
        adj1[j+1][al2]++;
        m = max(adj[i+1][al],m);
        m1 = max(adj[j+1][al2],m1);

        up[i+1] = m;
        down[j+1]=m1;
    }

    for(i=1;i<l;i++)
    {
        m = max(m,up[i]*down[i+1]);
    }
    for(i=0;i<27;i++)
    {
        m = max(last[i],m);
    }



    cout<<m<<endl;
}
