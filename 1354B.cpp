#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll pos[10];
bool visited[10];
vector<ll>v;

int main()
{
    ll t,i,n,l,r,k;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        k = s.size();
        memset(pos,-1,sizeof(pos));
        ll mn = INT_MAX;

        for(i=0;i<k;i++)
        {
            l = s[i]-'0';
            pos[l] = i;

            if(pos[1]>-1 && pos[2]>-1 && pos[3]>-1)
            {
                l = min(pos[1],min(pos[2],pos[3]));
                r = max(pos[1],max(pos[2],pos[3]));
                mn = min(mn,r-l+1);
            }
        }
        if(mn>s.size())
            cout<<0<<endl;
        else
        cout<<mn<<endl;

    }
    return 0;
}

