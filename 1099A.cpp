#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,h,w,u1,u2,d1,d2;

    cin>>w>>h>>u1>>d1>>u2>>d2;
    k=w;

    for(i=h;i>=0;i--)
    {
        k+=i;
        if(i==d1)
        {
            k-=u1;
        }
        else if(i==d2)
        {
            k-=u2;
        }
        if(k<0)
        {
            k=0;
        }

    }
    cout<<k<<endl;
}
