#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        string s ;
        if(n%2==0)
        {
            n/=2;
        for(i=0; i<n; i++)
        {
            printf("1");
        }

        }
        else
        {
            printf("7");
            n-=3;
            n/=2;
            for(i=1;i<=n;i++)
            {
                printf("1");
            }
        }
        cout<<endl;

    }
    return 0;
}
