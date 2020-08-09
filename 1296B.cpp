#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[1005];

int main()
{
    ll i,j,k,l,n,t;

    cin>>t;

    while(t--)
    {
     cin>>n;
     ll sum=0;

     if(n<10)
     {
         cout<<n<<endl;
         continue;
     }
     while(n!=1)
     {
        l = (n/10)*10;
        sum +=l;

        k = n - l;
        n /= 10;
        n += k;

        //cout<<sum<< " "<<n<<endl;
        if(n<10)
        {
            sum +=n;
            break;
        }
     }
     cout<<sum<<endl;
    }

    return 0;
}
