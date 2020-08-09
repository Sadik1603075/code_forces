#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct matrix
{
   ll a0=1,a1=1,b0=1,b1=0;
};

matrix mul (matrix A , matrix B,ll m)
{
    matrix c;
    c.a0 = ((A.a0*B.a0)%m + (A.b0*B.a1)%m)%m;
    c.a1 = ((A.a1*B.a0)%m + (A.b1*B.a1)%m)%m;
    c.b0 = ((A.a0*B.b0)%m + (A.b0*B.b1)%m)%m;
    c.b1 = ((A.a1*B.b0)%m + (A.b1*B.b1)%m)%m;

    return c;
}

matrix bigmod(matrix A ,ll b , ll m)
{
    if(b==1)
        return A;

    matrix x = bigmod(A,b/2,m);
     x = mul(x,x,m);

    if(b%2==1)
    {
        x = mul(x,A,m);
    }
    return x;
}

int main()
{
    ll t,n,i,m,m1;
        //n for nth fibonnacci number & m for modular of that number

        cin>>n>>m1;
        m = 1000000000 + 7;

        matrix ans1,first,ans2;
        first.a0 = 1;
        first.a1= 1;
        first.b0= 0;
        first.b1= 0;


        if(n>1)
         ans1 = bigmod(ans1,n-1,m);
        if(n>1)
         ans1 = mul(ans1,first,m);
        if(m1>1)
         ans2 = bigmod(ans2,m1-1,m);
        if(m1>1)
         ans2 = mul(ans2,first,m);

        printf("%lld\n",((2*(ans1.a0+ans2.a0-1))%m)%m);


}

