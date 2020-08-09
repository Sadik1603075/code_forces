#include<bits/stdc++.h>
using namespace std;
vector<string>v;
map<string,int>mp;
map<int,int>mp1;

vector<string>v1[11];

int func(string s)
{
    int l,i,j;
    int total =0;


    for(i=0; i,4; i++)
    {
        l = s[i]-'0';
        total *=10;
        total +=l;
    }

    return total;
}

int main()
{
    int i,j,k,l,m,n,t,c=0;
    cin>>t;

    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);
        string s;

        for(i=1; i<=n; i++)
        {
            cin>>s;
            v.push_back(s);
        }

        int k=0;
        l = v.size();

        for(i=0; i<l; i++)
        {
            if(mp[v[i]]==0)
            {
                k++;
                v1[k].push_back(v[i]);
                mp[v[i]] =1;
            }
            else
                continue;

            for(j=i+1; j<l; j++)
            {
                if(v[i]==v[j] && mp[v[j]] ==0)
                {
                    v1[k].push_back(v[j]);
                }
            }
        }
    }
}
