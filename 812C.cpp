#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

long long arr1[1000007];
long long arr2[1000007];
long long cal(int mid);
long long bud,n;

int main()
{
    long long i,high ,low,mid;

    scanf("%I64d%I64d",&n,&bud);

    for(i=0;i<n;i++)
    {
        scanf("%I64d",&arr1[i]);

    }
   low = 0;
   high = n+1;

   while(low<high-1)
   {

       mid = (high+low)/2;

       if(cal(mid)<=bud)
       {
           low = mid;
       }
       else
       {
           high =mid;

       }

   }

   printf("%I64d %I64d\n",low,cal(low));

   return 0;

}

long long cal(int k)
{
    long long i;
   long long  sum  =0;
       for(i=0;i<n;i++)
       {
           arr2[i]= arr1[i]+((i+1)*k);
       }
       sort(arr2,arr2+n);

       for(i=0;i<k;i++)
       {
           sum +=arr2[i];
       }

       return sum;
}
