#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100];
ll arr2[70];

int main()
{
   ll i,j,k,l;
   arr[0]=0;
   arr[1]=1;
   arr[2]=1;

   for(i=3;i<=65;i++)
   {
       arr[i] = arr[i-1]+arr[i-2];
       cout<<arr[i]<<" "<<i<<endl;
   }
   cin>>k;
   ll mul = 1;
   for(i=1;i<=k;i++)
    mul *=2;

   cout<<mul-50<<endl;

}


