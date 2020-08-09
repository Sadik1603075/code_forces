#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1005];

int main()
{
    ll t,n,i,j,l,k,x;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        l = n-1;

        j = k/l;

        if(k%l ==0)
        {
          j --;
        }

        ll start = n*j + 1;


        x = k - (j*l);
        cout<<start+x-1<<endl;



    }
    return 0;
}

