#include<bits/stdc++.h>
using namespace std;
int t[100005];
int a[100005];
long long csum[100005];

int main()
{
    int n,k,i,j,l,q,x,y,d,s;
    long long sum=0,m=0,p=0;

    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum +=a[i];

    }
    for(i=1;i<=n;i++)
    {
        cin>>t[i];
        if(t[i]==0)
        {
            sum +=a[i];
            csum[i]=sum;
        }
        else
        {
            csum[i] = sum;
        }
    }
    sum =0;
    l=1;
    for(i=1;i<=n-k+1;i++)
    {
        if(t[i]==0)
        {
          sum = csum[i+k-1]-csum[i-1];

           if(sum>p)
           {
               p= sum;
               x= i;
               y = i+k-1;
           }
           sum =0;
        }
    }
    //cout<<sum<<" "<<x<<" "<<y<<endl;
    for(d=x;d<=y;d++)
    {
        if(t[d]==1)
            m+=a[d];
    }
    for(i=1;i<=n;i++)
    {
        if(i==x)
        {
            i=y+1;
        }
        if(t[i]==1)
         m+=a[i];
    }
    cout<<m+p<<endl;
    return 0;
}
