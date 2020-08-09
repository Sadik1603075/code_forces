#include<bits/stdc++.h>
using namespace std;

string s[505];

int main()
{
    int i,j,m,n,l;
    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    bool ans = false;
    for(i=0;i<n&&!ans;i++)
    {
        for(j=0;j<m&&!ans;j++)
        {
            if(s[i][j]=='S')
            {
                if(s[i][j+1]=='W'&&j+1<=m)
                {
                    ans = true;
                    break;
                }
                else if(s[i][j-1]=='W'&&j-1>=0)
                {
                    ans = true;
                    break;
                }
                else if(s[i-1][j]=='W'&&i-1>=0)
                {
                    ans = true;
                    break;
                }
                else if(s[i+1][j]=='W'&&i+1<=n)
                {
                   ans = true;
                    break;
                }
            }

            }
        }


    if(ans==true)
    {
        printf("No\n");
    }
    else
    {
        cout<"asdfghjk";
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='.')
                {
                    s[i][j]='D';

                }
                //cout<<s[i][j];
            }
           // cout<<endl;
        }

        for(i=0;i<n;i++)
        {
            cout<<s[i]<<endl;
        }

    }

    return 0;
}
