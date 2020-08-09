#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i,j,k,l,a,b,c,d,x,t,pen,pencil;
    cin>>t;

    for(x=1;x<=t;x++)
    {
        pen=0;
        pencil=0;
        cin>>a>>b>>c>>d>>k;

        if(a%c==0)
            pen = a/c;
        else
            pen = (a/c)+1;

        if(b%d==0)
            pencil = b/d;
        else
            pencil = (b/d)+1;

        if(pen+pencil<=k)
            printf("%d %d\n",pen,pencil);
        else
            printf("-1\n");
    }
    return 0;
}
