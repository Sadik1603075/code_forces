#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,r,ans,vanilla,chocolate,type1,type2;
    cin>>t;
    while(t--)
    {
        cin>>vanilla>>chocolate>>type1>>type2;

        if((vanilla+chocolate)<(type1+type2))
        {
            printf("NO\n");
            continue;
        }
        if(min(vanilla,chocolate)<type2)
        {
            printf("NO\n");
            continue;
        }

        printf("YES\n");


    }
}

