#include<bits/stdc++.h>
using namespace std;

string s,t;
int arrs[30],arrt[30];

int main()
{
    int i,j,k,l,m=0,n,q;
    cin>>q;



        for(i=1;i<=q;i++)
        {
            cin>>s>>t;
            m=0;

           for(j=0;j<s.size();j++)
           {
               arrs[s[j]-'a']++;
               arrt[t[j]-'a']++;
           }

        for(j=0;j<=26;j++)
        {
            if(arrt[j]>0 && arrs[j]>0)
            {
                m=1;
                break;
            }
        }

        if(m==1)
        {
            printf("YES\n");

        }
        else
        {
            printf("NO\n");
        }
        memset(arrs,0,sizeof(arrs));
        memset(arrt,0,sizeof(arrt));


        }



}

