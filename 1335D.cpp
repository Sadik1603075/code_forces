#include<bits/stdc++.h>
using namespace std;
#define ll long long

string s[10];
int arr[10][10];

int main()
{
    ll i,j,n,t,m,k;
    cin>>t;

    while(t--)
    {

        for(i=0;i<9;i++)
        {
            cin>>s[i];
        }
        char ch;
        int ok=0;

        for(i=0;i<9;i++)
        {
          for(j=0;j<9;j++)
          {
              if(s[i][j]=='4')
              {
                  s[i][j] = '4';
              }
          }
        }


        for(i=0;i<9;i++)
        {
            cout<<s[i]<<endl;
        }

    }
    return 0;
}

