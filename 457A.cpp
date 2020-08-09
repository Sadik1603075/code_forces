#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,hh,mm,i,j,k,c=0;

    scanf("%d%d%d",&x,&hh,&mm);

    if(hh%10==7||mm%10==7)
    {
        printf("0\n");
        return 0;
    }

    if(hh==0)
    {
        hh =24;
    }
    if(mm==0)
    {
        mm=60;
        hh--;
    }

    for(i=0;;i++)
    {
        mm -=x;

        c++;
        if(mm%10==7 || hh%10==7)
        {
            break;
        }
        if(mm<=0)
        {
            k =mm;

            hh-=1;
            mm = 60-abs(k);

            if(hh==0)
            {
                hh= 24;
            }

        }
      if(mm%10==7 || hh%10==7)
        {
            break;
        }
    printf("%d %d\n",hh,mm);
    }
    printf("%d\n",c);

    return 0;
}
