#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j,l,red,green,blue,sum=0;
    cin>>n>>k;

    red = n*2;
    green = n*5;
    blue = n*8;
    if(k>=red)
    {
        sum+=1;
    }
    else
    {
        if(red % k==0)
        {
            sum+=(red/k);
        }
        else
        {
            sum+=(red/k)+1;
        }
    }
     if(k>=green)
    {
        sum+=1;
    }
    else
    {
        if(green % k==0)
        {
            sum+=(green/k);
        }
        else
        {
            sum+=(green/k)+1;
        }
    }
     if(k>=blue)
    {
        sum+=1;
    }
    else
    {
        if(blue% k==0)
        {
            sum+=(blue/k);
        }
        else
        {
            sum+=(blue/k)+1;
        }
    }
    cout<<sum<<endl;
}
