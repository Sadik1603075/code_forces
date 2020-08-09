#include<bits/stdc++.h>
using namespace std;
#define ll long long
deque<ll>candy;

vector<char>s;

int main()
{
    ll t,n,i,j,val,n0,n1,n2;
    cin>>t;


    while(t--)
    {
        cin>>n0>>n1>>n2;
        val=0;
        if(n2>0)
        {
            for(i=0;i<=n2;i++)
            s.push_back('1');
            val=1;
        }
        if(n0>0)
        for(i=0;i<=n0;i++)
            s.push_back('0');

          if( n0==0 && n2>0 &&n1>0)
            {
                s.push_back('0');
                n1--;
            }

        if(n1>0 && n2>0 && n0>0)
        n1--;
        if(n1>0 && n2==0 && n0==0)
            s.push_back('0');

        while(n1!=0)
        {
            s.push_back('1');
            n1--;

            if(n1==0)
                break;
            s.push_back('0');
            n1--;

            if(n1==0)
                break;
        }

        for(i=0;i<s.size();i++)
            cout<<s[i];
        cout<<endl;

        s.clear();
    }
    return 0;
}


