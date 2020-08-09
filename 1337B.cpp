#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    ll t,i,n,m,x;
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>m;

        while(n!=0)
        {
            if(x-(m*10)<=0)
                break;
            if(x<=20)
                break;

            x /=2;
            if(x<=0)
            {
                break;
            }
            x+=10;
            n--;
        }

        x -= (m*10);

        if(x<=0)
        {
            printf("YES\n");
            continue;
        }
        else
        {
            printf("NO\n");
        }






    }
    return 0;
}

