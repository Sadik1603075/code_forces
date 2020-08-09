#include<bits/stdc++.h>
using namespace std;

int cost[105];

int main()
{
    int a,b,f,i,sum=0,n;
    cin>>n>>f;
    b = f;

    cost[1] = 1*f;

    for(i=2;i<=n;i++)
    {
        cost[i] +=(cost[i-1]+i);
    }
    if(n<=f)
    {
        cout<<n-1<<endl;
    }
    else
    cout<<cost[n-f]<<endl;
}
