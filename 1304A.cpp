#include<bits/stdc++.h>
using namespace std;
int arr[1001];

int main()
{
    long long i,j,mid,l,t,n,x,y,a,b,k,x1,y1;
    cin>>t;

    while(t--)
    {
        cin>>x>>y>>a>>b;
        int ans=0;
        x1 = y-x;
        mid = a+b;
        l = x1%mid;
        if(l==0)
        {
            printf("%lld\n",x1/mid);
        }
        else
        {
            printf("-1\n");
        }

    }
    return 0;
}
