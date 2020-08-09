#include<bits/stdc++.h>
using namespace std;

int arr[1005];

int main()
{
    int i,j,k,l,m,n,t,a,b;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        cin>>a>>b;

        m = b-a;
        int sum=0;

        if(m==0)
        {
           printf("%d\n",sum);
        }
        else if(m>0)
        {
            l = b-a;

            sum += (l/5);

            l = l%5;
            sum +=  (l/2);
            l = l%2;
            sum += (l/1);

            printf("%d\n",sum);
        }
        else
        {
            l =a-b;

              sum += (l/5);
                 l = l%5;
            sum +=  (l/2);
              l = l%2;
            sum += (l/1);

            printf("%d\n",sum);

        }
    }




    return 0;
}
