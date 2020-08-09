#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<long long , long long >

map < pair < pll, pll > ,long long >cur;
bool visited[100005];

int main()
{
    ll i,j,k,l,n,t,odd,even;

    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        cur.clear();

        cur[make_pair(make_pair(0,0),make_pair(0,0))]=0;
        ll x=0,y=0,l=-1,r=n,sum=0,ok=1;

        for(i=0;i<s.size();i++)
        {
            l = x;
            r = y;

            if(s[i]=='W')x--;
            else if(s[i]=='E')x++;
            else if(s[i]=='N')y++;
            else if(s[i]=='S')y--;

            if(cur.count(make_pair(make_pair(x,y),make_pair(l,r))))
            {
               sum ++;
            }
            else
            {
            sum +=5;
            }
            cur[make_pair(make_pair(x,y),make_pair(l,r))] =1;
            cur[make_pair(make_pair(l,r),make_pair(x,y))] =1;

        }
        cout<<sum<<endl;

    }

    return 0;
}

