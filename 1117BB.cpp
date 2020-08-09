#include<bits/stdc++.h>
using namespace std;

long long arr[2*100005];


int main()
{
    long long n,m,k,i,j,l,mx1,mx2;
    cin>>n>>m>>k;

    long long sum=0,a,b;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&arr[i]);
    }

    sort(arr,arr+n);

    a = arr[n-1];
    b = arr[n-2];
    //cout<<a<<" "<<b<<endl;

    //cout<<a<<" "<<b<<endl;

    l = m/(k+1);
    mx1 = l*k;

    j = m%(k+1);

    m-=j;
    m-=mx1;
    mx2=m;

    sum = (mx1*a)+(mx2*b)+(j*a);
    cout<<sum<<endl;


}

