#include<bits/stdc++.h>
using namespace std;

long long arr1[1005][1005];

int main()
{
    long long i,j,n,l;
    cin>>n;
    long long val =1;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            scanf("%lld",&arr1[i][j]);
        }
    }

    val = (arr1[1][2]*arr1[1][3]);
    val /= arr1[2][3];

     val = sqrtl(val);
     printf("%lld ",val);

    val = (arr1[2][1]*arr1[2][3])/arr1[1][3];
     val = sqrtl(val);
     printf("%lld ",val);

    for(i=3;i<=n;i++)
    {
       val = arr1[i][1]*arr1[i][2];

       l = val / arr1[1][2];

       l = sqrtl(l);
       printf("%lld ",l);
    }
    printf("\n");
    return 0;
}

