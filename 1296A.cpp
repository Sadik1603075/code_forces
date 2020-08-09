#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,k,l,n,t,odd,even;

    cin>>t;

    while(t--)
    {
        cin>>n;
        odd=0,even=0;
        j=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&l);
             if(l%2==1)
        {
            odd++;
        }
        else
        {
           even++;
        }

        }

        if(n%2==0)
        {
            if(even == 0 || odd ==0)
            {
                printf("NO\n");
            }

            else
            {
                printf("YES\n");
            }
        }

        else
        {
            if(odd==0)
            {
                printf("NO\n");
            }
            else
              printf("YES\n");
        }

    }

    return 0;
}

