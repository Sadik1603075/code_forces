#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1003];

int main()
{
    ll t,i,n,j,r,s,p,l;
    string s1;

    cin>>t;
    while(t--)
    {
        cin>>s1;
         l = s1.size();
         r=0,s=0,p=0;

        for(i=0;i<l;i++)
        {
            if(s1[i]=='R') r++;
            else if(s1[i]=='P') p++;
            else s++;
        }

        if(s>=r && s>=p) for(i=0;i<l;i++) printf("R");
        else if(r>=s && r>=p) for(i=0;i<l;i++) printf("P");
        else for(i=0;i<l;i++) printf("S");
        printf("\n");

    }
    return 0;
}
