#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1003];
vector<pair<ll , ll > > v;
vector<char> ans;


int main()
{
    ll t,i,n,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        bool ok =0;



        for(i=0;i<n;i++)
        {
            if(s1[i]>s2[i])
            {
                ok=1;
                break;
            }
        }
        if(ok)
        {
            printf("-1\n");
            continue;
        }

        j =0;

        for(i=0;i<n;i++)
        {
            j=i;
            char x='z';

            while(1)
                {

                    if(x>s2[j]) x = s2[j];
                    if(s1[j]==s1[j+1]) j++;
                    else break;
                    if(j==n-1) break;
                }

            v.push_back(make_pair(i,j));
            i = j;
            ans.push_back(x);
        }

        for(i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<" "<<ans[i]<<endl;;

        }
        v.clear();
        ans.clear();

    }
    return 0;
}
