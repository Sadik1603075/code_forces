#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,l,k;
    string s,s1;

    cin>>t;
    while(t--)
    {
        cin>>s;
        int zero=0,one=0;

        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                one++;
            else
                zero++;
        }
        if(one==s.size())
        {
            cout<<s<<endl;
            continue;
        }
        if(zero==s.size())
        {
           cout<<s<<endl;
            continue;
        }

        char f1,s2;

        if(s[0]=='0')
        {
            f1=s[0];
            s2='1';
        }
        else
        {
            f1=s[0];
            s2='0';
        }

        for(i=0;i<2*s.size();i++)
        {
            if(i%2==0)
                cout<<f1;
            else
                cout<<s2;
        }
        cout<<endl;
    }
}
