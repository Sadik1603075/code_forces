#include<bits/stdc++.h>
using namespace std;
#define ll long long
deque<ll>v1[30],v2[30];
vector< pair<ll,ll> >v;

int main()
{
    ll n,i,j,m;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;

    for(i=0;i<n;i++)
    {
        if(s1[i]=='?')
            v1[27].push_back(i+1);
        else
            v1[s1[i]-'a'].push_back(i+1);

        if(s2[i]=='?')
            v2[27].push_back(i+1);
        else
            v2[s2[i]-'a'].push_back(i+1);
    }

    for(i=0;i<26;i++)
    {
        m=min(v1[i].size(),v2[i].size());
        if(v1[i].size()>0 && v2[i].size()>0)
        {
            while(m!=0)
            {
                ll p = v1[i].front();
                ll q = v2[i].front();
                v.push_back(make_pair(p,q));
                v1[i].pop_front();
                v2[i].pop_front();
                m--;
            }
        }
    }

    for(i=0;i<26;i++)
    {
        m = min(v1[27].size(),v2[i].size());

         if(v1[27].size()>0 && v2[i].size()>0)
        {
            while(m!=0)
            {
                ll p = v1[27].front();
                ll q = v2[i].front();
                v.push_back(make_pair(p,q));
                v1[27].pop_front();
                v2[i].pop_front();
                m--;
            }
        }
    }


    for(i=0;i<26;i++)
    {
         m = min(v1[i].size(),v2[27].size());

         if(v1[i].size()>0 && v2[27].size()>0)
        {
            while(m!=0)
            {
                ll p = v1[i].front();
                ll q = v2[27].front();
                v.push_back(make_pair(p,q));
                v1[i].pop_front();
                v2[27].pop_front();
                m--;
            }
        }
    }

    m = min(v1[27].size(),v2[27].size());

         if(v1[27].size()>0 && v2[27].size()>0)
        {
            while(m!=0)
            {
                ll p = v1[27].front();
                ll q = v2[27].front();
                v.push_back(make_pair(p,q));
                v1[27].pop_front();
                v2[27].pop_front();
                m--;
            }
        }
    cout<<v.size()<<endl;

    for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }



}
