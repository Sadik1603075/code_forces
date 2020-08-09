#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int cont[100005];
int bit[100005];
bool check[100005];

int main()
{
    int n,i,j,k,l,m;
    scanf("%d",&n);

    for(i=1,j=1;i<=n;i++,j++)
    {
        scanf("%d",&l);

        if(l==arr[j-1])
        {
            arr[j-1]=l;
            cont[j-1]++;
            j--;

        }
        else
            {
                arr[j]=l;
                cont[j]++;
            }
    }
    int c=0;
    for(i=1;i<=n;i++)
    {
        if(arr[i]!=0)
           {
               c++;
              bit[arr[i]]++;
           }
           else
            break;
    }
    c--;
    int sum =(c*(c+1))/2;
    printf("%d \n",sum);

    for(i=1;i<=100000;i++)
    {
        if(bit[i]-2>0)
        {
            sum -=(bit[i]-2);
        }
    }
    printf("%d \n",sum);
    c++;
    for(i=1;i<=n;i++)
    {
     c--;
        if(arr[i+1]!=0)
        {
            if(check[i]==0)
            {
                check[arr[i]]=1;
            }
            else
            {
                printf("*** %d\n",c);
                sum-=c;
            }

        }
        else
            break;
    }

    printf("%d \n",sum);
}
