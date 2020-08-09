#include<bits/stdc++.h>
using namespace std;

int arr[1000];

int main()
{
    long long i,j,k,l,m,n,t,a,b,s,x;

    cin>>t;

    for(k=1;k<=t;k++)
    {
        cin>>a>>b>>n>>s;

        l = s/a;
        m = s/n;


        if(m>0)
        {
            if(a>=m)
            {
                s -= (m*n);
                s -= b;

                if(s<=0)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else
            {
                s -= (a*n);
                s-=b;

                if(s<=0)
                    printf("YES\n");
                else
                    printf("NO\n");

            }
        }
        else
        {
            s-=b;

                if(s<=0)
                    printf("YES\n");
                else
                    printf("NO\n");

        }
    }


    return 0;
}
