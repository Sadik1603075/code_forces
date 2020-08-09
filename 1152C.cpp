#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,k,lcm,m=INT_MAX;
    cin>>a>>b;

    int gcd = __gcd(a,b);
      lcm = (a*b)/gcd;
      m=lcm;
      k=0;
      int a1=a,b1=b;


    for(i=1;i<=100;i++)
    {
        a1=a+i;
        b1=b+i;

        gcd= __gcd(a1,b1);
        lcm = (a1*b1)/gcd;
    if(lcm<m)
    {
        lcm = m;
        k=i;
    }
    }
    cout<<k<<endl;


}
