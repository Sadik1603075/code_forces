#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,j,k,l,m,sum=0,h1,m1,h2,m2,ansh;
    char a;
    scanf("%lld%c%lld",&h1,&a,&m1);
    scanf("%lld%c%lld",&h2,&a,&m2);

    //cout<<h1<<" "<<m1<<" "<<h2<<" "<<m2<<endl;

    i = (h2-h1)/2;
    ansh = h1+i;

    if(ansh/10 == 0) printf("0%lld:",ansh);
    else printf("%lld:",ansh);


    if(m1==m2) k = ((60+m1)/2)%60;
    else if(m2>m1) k = (m2-m1)/2+m1;
    else k = (60 - m2)/2;

    if(h2-h1==0)
    {
        if(m1==m2)
        {
            k = 30;
        }

    }

    if(k/10==0)
    {
        printf("0%lld\n",k);
    }
    else
        printf("%lld\n",k);

    return 0;
}
