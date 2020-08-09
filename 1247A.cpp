#include<bits/stdc++.h>
using namespace std;

int arr[1005];

int main()
{
    int i,j,k,l,m,n,t;
    cin>>n>>l;

    if(abs(n-l)>1&& abs(n-l)<8)
    {
        printf("-1\n");
    }
    else
    {
        if(n==l)
        {
            printf("%d1 ",n);
            printf("%d2\n",l);
        }
        else
        {
            if(n==9&&l==1)
            {
                printf("%d9 ",n);
                printf("100\n");
                return 0;
            }
            else if(n==1&&l==9)
            {
                printf("-1\n");
                return 0;
            }
            printf("%d9 ",min(n,l));
            printf("%d0\n",max(n,l));
        }
    }

    return 0;
}

