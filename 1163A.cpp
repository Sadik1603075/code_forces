#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,l;

    cin>>n>>m;

    k = n/2;

    if(n%2==1)
    {
        if(m==0)
        {
            cout<<1<<endl;
            return 0;
        }

        if(m==n/2 || m==(n/2)+1)
        {
            cout<<n/2<<endl;
        }
        else if (m<n/2)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<n-m<<endl;
        }
    }
    else
    {
        if(m==0)
        {
            cout<<1<<endl;
            return 0;
        }
        if(m==n/2)
        {
            cout<<n/2<<endl;
        }
        else if(m<n/2)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<n-m<<endl;
        }
    }
}
