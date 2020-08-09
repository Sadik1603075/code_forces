#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,q,i,j,k,d;

    cin>>q;

    while(q--)
    {
        cin>>n>>a>>b;

        if(a*2<=b)
        {
            k = a;
            d =1;
        }
        else
        {
            k = b;
            d = 2;
        }

        if(d==1)
        {
            cout<<n*a<<endl;
        }
        else
        {
            i = n/d;
            j = n%d;

            cout<<(i*b)+(j*a)<<endl;
        }
    }
}

