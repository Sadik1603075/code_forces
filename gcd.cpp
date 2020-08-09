#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int gcd(int a,int b);
int main()
{
    int n,i,j,val,c1=0,c2=0,c3=0,z;
    scanf("%d",&z);
    long long arr[z];
    int sum=0;

    for(i=0;i<z;i++)
    {
        scanf("%I64d",&arr[i]);
        if(arr[i]==1)
        {
            sum +=1;
        }

        if(arr[i]%2==0)
        {
            c1++;
        }
        else
            {
                c2++;
            }
    }
    if(c1==z||c2==z)
    {
        printf("-1\n");
        return 0;
    }

    int x=0,y=1,m;
    while(1){
            if(sum==z)
            break;
            m = arr[x]%2;
    n = arr[y]%2;
        if(m != n)
        {
            val = gcd(arr[x],arr[y]);

            c3++;
            if(val==1)
            {
                sum +=1;
            }

            if(arr[x]%2==0)
            {
                arr[x]=val;
            }
            else if(arr[y]%2==0)
            {
                arr[y]=val;
            }
        }
        x++;
        y++;
        if(x==z&&y==z)
        {
            x = 0;
            y =1;
        }

    }
    printf("%d\n",c3);
    return 0;
}
int gcd(int a,int b)
{
    int i;

          a = b - a + 1;
          i= (a*(a-1)/2);
          printf("%d ",i);
          return i;

}
