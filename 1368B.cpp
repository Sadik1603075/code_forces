#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll k,n,i,j;

    ll arr[11];

    for(i=0;i<=10;i++)arr[i]=1;
    cin>>k;
    string s="codeforces";

    ll x=9,mul=1;

    while(1)
    {
        mul=1LL;
        //cout<<mul<<endl;

        for(i=0;i<=10;i++)mul*=arr[i];

        if(mul>=k)
            break;
        arr[x]++;
        x--;
        if(x<0)x=9;
    }

    for(i=0;i<10;i++)
    {
        for(j=1;j<=arr[i];j++)
            printf("%c",s[i]);
    }
}
