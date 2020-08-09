#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    long long i,j,t,n,k,l,m,sum=0;

    cin>>t;

    while(t--)
    {
       cin>>n>>m;
       sum = (n*(n+1)) / 2;

       ll g = (m+1);
       ll z = n-m;
       ll k = z/g;

       k++;
       sum -=((z%g)*k*(k+1))/2;
       k--;
       g -= (z%g);
       sum -= (g*k*(k+1)/2);
       cout<<sum<<endl;


    }

}




