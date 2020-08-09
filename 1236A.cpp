#include<bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
    int i,j,k,l,m,n,t,a,b,c,sum=0;
    cin>>t;

    for(k=1; k<=t; k++)
    {
        sum=0;
        cin>>a>>b>>c;

        if(b>c)
        {

            if(c%2==0)
            {

                sum +=(c/2);
                sum += c;
                b -= c/2;

            }
            else
            {

                c-=1;
                sum += (c/2);
                sum +=  c;
                b-=c/2;


            }


            if(a>b)
            {

                if(b%2==0)
                {

                    sum +=(b/2);
                    sum += b;
                    a -= b/2;

                }
                else
                {

                    b-=1;
                    sum += (b/2);
                    sum +=  b;
                    a-=b/2;


                }
            }
            else
            {
                if(b>=2*a)
                {
                    sum += a+2*a;
                     printf("%d\n",sum);
                    continue;
                }
                if(a%2==0)
                {
                    m = a/2;
                    sum +=(a/2);
                    sum +=2*m;
                }
                else
                {
                    a+=1;
                    m = a/2;
                    sum +=(a/2);
                    sum +=2*m;

                }
            }
        }

        else
        {
            if(c>=2*b)
            {
                sum +=b+2*b;
                 printf("%d\n",sum);
                continue;
            }

            if(b%2==0)
            {
                m =c/2;
                sum +=(c/2);
                sum += 2*m;
                b -= m;

            }
            else
            {

                m = b/2;
                sum += m;
                sum +=  2*m;
                b-=m;


            }


            if(a>b)
            {

                if(b%2==0)
                {

                    sum +=(b/2);
                    sum += b;
                    a -= b/2;

                }
                else
                {

                    b-=1;
                    sum += (b/2);
                    sum +=  b;
                    a-=b/2;


                }
            }
            else
            {
                if(b>=2*a)
                {
                    sum += a+2*a;
                     printf("%d\n",sum);
                    continue;
                }
                if(a%2==0)
                {
                    m = a/2;
                    sum +=(a/2);
                    sum +=2*m;
                }
                else
                {
                    a+=1;
                    m = a/2;
                    sum +=(a/2);
                    sum +=2*m;

                }
            }



        }
        printf("%d\n",sum);
    }


    return 0;
}

