#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100005];

int main()
{
    ll t,n,i,j;
    cin>>t;

     arr[1] = 2;

     for(i=2;i<=100005;i++)
     {
         j = (i*2)+(i-1);
        arr[i] = arr[i-1]+j;
     }


    while(t--)
    {
        cin>>n;
        ll sum=0;

        while(n!=0)
        {
            for(i=100005;i>=1;i--)
            {
                if(n>=arr[i])
                {
                    n -= arr[i];
                    sum ++;
                    break;
                }
            }
            if(n==1)
                break;
        }
        cout<<sum<<endl;
    }
    return 0;
}
