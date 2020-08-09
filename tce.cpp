#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,x,l;

    scanf("%d%d",&a,&b);

    if(a>b)
    {
        x = a-b;
    }
    else
    {
        x = b-a;
    }

    if(x%2==0)
    {
        i = x/2;
        j = i;
    }
    else
    {
        i = x/2;
        j = i+1;
    }

    if(x==1)
    {
        cout<<1<<endl;
        return 0;
    }

    l = (i*(i+1))/2 + (j*(j+1))/2;

    cout<<l<<endl;
}
