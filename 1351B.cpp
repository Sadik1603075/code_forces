#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,a1,b1,a2,b2;
    cin>>t;
    while(t--)
    {
        cin>>a1>>b1;
        cin>>a2>>b2;

       if(b1>a1)
        swap(b1,a1);
       if(b2>a2)
        swap(b2,a2);

       if(a1==a2 && b1+b2==a1)
        printf("YES\n");
       else
        printf("NO\n");
    }
}

