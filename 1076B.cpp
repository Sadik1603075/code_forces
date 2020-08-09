#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool arr[1000006];

void siv()
{
    int N= 100005;
    for(int i=3;i<=sqrt(N);i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=N;j+=2*i)
            {
                arr[j]=1;
            }
        }
    }
}
int main()
{
    ll i,j,k,n;
    cin>>n;

    if(n%2==0)
    {
        printf("%lld\n",n/2);
        return 0;
    }
    siv();
    int f=0;
    for(i=3;i<=100000;i+=2)
    {
        if(arr[i]==0)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        n-=i;
        printf("%lld\n",n/2+1);
    }
    else
    {
        printf("1\n");
    }

    return 0;
}

