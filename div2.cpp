#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long Y,Bl,A,B,x,y,z,p=0;

    scanf("%I64d%I64d",&A,&B);

    scanf("%I64d%I64d%I64d",&x,&y,&z);

    Y = (2*x)+y;
    Bl = y+(3*z);

    if(Y>A)
    {
        p +=(Y-A);
    }
    if(Bl>B)
    {
        p+= (Bl-B);
    }
    printf("%I64d\n",p);

    return 0;
}
