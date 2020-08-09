#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n;
    double l,m;
    cin>>n;
    m=0.0;
    for(i=n;i>=1;i--)
    {

        l=i*1.00;
        m +=(1.00/l);
    }
    printf("%lf\n",m);


}
