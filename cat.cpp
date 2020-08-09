#include<bits/stdc++.h>
using namespace std;

int main()
{
    double hh,mm,h,d,c,n,l,p,h1,m1;
    double i,j,i1,j1;

    cin>>hh>>mm>>h>>d>>c>>n;

    if(hh>=20)
    {

        i = h/n;
        i = ceil(i);
        c= c-(c/5);
        j = i*c;
        printf("%0.3lf\n",j);
        return 0;
    }

    if(mm==0)
    {
        h1 = (20-hh)*60;
        p = h1*d;

        i= h/n;
        i = ceil(i);
        j = i*c;
            c= c-(c/5);
        h+=p;
        i1 = h/n;
        i1 = ceil(i1);

        j1 = i1*c;
        if(j1>j)
        {
          printf("%0.3lf\n",j);
        }
        else
        {
            printf("%0.3lf\n",j1);
        }

        return 0;
    }
    m1 = 60-mm;
    hh++;
    h1 = (20-hh)*60;
    m1 = m1+h1;

    i= h/n;
        i = ceil(i);
        j = i*c;

    p = m1*d;
    h+=p;
        i1 = h/n;
        i1 = ceil(i1);
        c= c-(c/5);
        j1 = i1*c;
      if(j1<j)
        {
            printf("%0.3lf\n",j1);
        }
        else
        {
            printf("%0.3lf\n",j);
        }

        return 0;

}
