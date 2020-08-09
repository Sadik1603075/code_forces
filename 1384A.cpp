#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1003];
vector<char>s[105];

int main()
{
    ll t,i,n,j;
    cin>>t;
    string s1 ;
    string s2;




    while(t--)
    {
        cin>>n;


        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }

        char alpha='a';

        for(i=1;i<=n+1;i++)
        {
            for(j=0;j<=50;j++)
            {
                s[i].push_back(alpha);
            }

            if(alpha=='z')
            {
                alpha='a';
                continue;
            }
            alpha++;
        }


        for(i=1;i<=n;i++)
        {
            for(j=0;j<arr[i];j++)
            {
                s[i+1][j] =s[i][j];
            }
        }

        for(i=1;i<=n+1;i++)
            {
                for(j=0;j<s[i].size();j++)
                    cout<<s[i][j];
                cout<<endl;
                s[i].clear();
            }


    }
    return 0;
}

