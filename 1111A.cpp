#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,v1=0,v2=0,c1=0,c2=0;
    string s,t;
    cin>>s;
    cin>>t;
    if(s.size()!=t.size())
    {
        cout<<"No"<<endl;
        return 0;
    }
    k=1;

    for(i=0;i<s.size();i++)
    {
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'))
        {
            k=1;
        }
        else if((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')&&(t[i]!='a'&&t[i]!='e'&&t[i]!='i'&&t[i]!='o'&&t[i]!='u'))
        {
            k=1;
        }
        else
        {
            k=0;
            break;
        }
    }
    if(k==0)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
}
