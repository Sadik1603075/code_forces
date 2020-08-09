#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,c1=0,c2=0,c=0;
    string s,s1,s2;
    cin>>s;

    i=0;
    l=s.size();
    n=0;

    for(i=0; i<l; i++)
    {
        if(s[i]=='[')
        {
            s1+=s[i];

            break;
        }
    }

    for(i=i+1; i<l; i++)
    {
        if(s[i]==':')
        {
            s1+=s[i];
            c1=i;
            break;
        }
    }


    for(i=i+1; i<l; i++)
    {
        if(s[i]==':')
        {
            s1+=s[i];
            break;
        }
    }

    for(i=i+1; i<l; i++)
    {
        if(s[i]==']')
        {
            s1+=s[i];
            break;
        }
    }
    n=s1.size();


    if(n==4&&s1[0]=='['&&s1[1]==':'&&s1[2]==':'&&s1[3]==']')
    {

        for(j=l-1;j>=2;j--)
        {
            if(s[j]==':')
            {c2=j;
            break;
            }

        }
        for(i=c1+1;i<c2;i++)
        {
            if(s[i]=='|')
            {
                c++;
            }
        }

        cout<<(4+c)<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

}
