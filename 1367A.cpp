#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1003];

int main()
{
    ll n,t,i,m,j;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;

        if(s.size()==2)
        {
            cout<<s<<endl;
            continue;
        }
        for(i=0;i<s.size();i+=2)
        {
            cout<<s[i];
        }
        cout<<s[s.size()-1];
        cout<<endl;
    }
    return 0;
}

