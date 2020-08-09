#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,r,L,v,xx,yy;
    cin>>n;
    while(n--){
    cin>>L>>v>>l>>r;

    k = L/v;
    xx= r/v;
    yy = (l-1)/v;
    xx -=yy;
    k-=xx;

    printf("%d\n",k);

    }
}
