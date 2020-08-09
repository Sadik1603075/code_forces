#include<bits/stdc++.h>
using namespace std;

long long arr[1000006];

int main()
{
    long long i,sum=0,k,l,n,m;
    cin>>n>>k;

   for(i=1;i<=n;i++)
   {
       sum +=i;

       if( sum - (n-i)==k)
       {
           cout<<n-i<<endl;
           break;
       }
   }

    return 0;

}
