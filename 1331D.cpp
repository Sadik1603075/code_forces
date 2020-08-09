#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    int a;
    cin>>a;

    int l = sqrt(a);

    for(int i=2;i<=l;i++)
    {
        if(a%i==0)
        {
            printf("%d",i);
            printf("%d\n",a/i);
            break;
        }
    }
    return 0;
}

