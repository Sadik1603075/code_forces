#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1003];

int main()
{
    ll n,t,i,j,c=0,k1,k2,ok;
    cin>>t;
    string s;

    while(t--)
    {
        c=0,k1=0,ok=0;
        cin>>n;
        cin>>s;
        k2 = s.size();

        ll c1=0;

        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                printf("%c",s[i]);
            }
            else
            {
                k1=i;
                ok=1;
                break;

            }
        }

        if( ok==0)
            {
                printf("\n");
                continue;
            }

        c=0;
        ok=0;
        for(i=n-1;i>=k1;i--)
        {
            if(s[i]=='1')
                c++;
            else
            {
                ok=1;
                k2=i;
                break;
            }
        }

        if( ok==0 )
        {
            for(j=1;j<=c;j++)
                printf("1");
            printf("\n");

        }
        else
        {
            printf("0");
              for(j=1;j<=c;j++)
                printf("1");
            printf("\n");
        }
    }


    return 0;
}

