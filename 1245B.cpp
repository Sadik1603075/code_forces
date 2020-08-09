#include<bits/stdc++.h>
using namespace std;

int arr[1005];

int main()
{
    int i,j,k,m,n,t,a,b,c;
    cin>>t;
    long long ans,y,z,x=1000000000000000000;
    for(k=1; k<=t; k++)
    {
        scanf("%d%d",&a,&b);

        c = __gcd(a,b);



        if(c>1)
        {
            printf("Infinite\n");
        }
        else
        {
            printf("Finite\n");
        }

    }

}
