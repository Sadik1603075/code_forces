#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a,l1=0,r1=0,i=0,j=0;
    cin>>l>>r>>a;

    i = l+r+a;
    l1 = l+a;
    r1 = r+a;

    if(l>r)
    {
        l1 = l-r;
        if(a==l1)
        {
            cout<<2*l<<endl;
        }
        else if(a<l1)
        {
            r+=a;
            cout<<2*r<<endl;
        }
        else
        {
            r +=l1;
            a-=l1;
            j = a/2;

            l +=j;
            cout<<2*l<<endl;
        }
    }
    else if(r>l)
    {
         l1 = r-l;
        if(a==l1)
        {
            cout<<2*r<<endl;
        }
        else if(a<l1)
        {
            l+=a;
            cout<<2*l<<endl;
        }
        else
        {
            l +=l1;
            a -=l1;
            j = a/2;

            l +=j;
            cout<<2*l<<endl;
        }
    }
    else
    {
        j = a/2;
        l+=j;
        cout<<2*l<<endl;
    }

    return 0;


}
