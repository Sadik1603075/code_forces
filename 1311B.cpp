#include<bits/stdc++.h>
using namespace std;
int arr[105];
int pos[105];

int main()
{
    int i,j,k,l,a,b,t,n,m;
    cin>>t;
    while(t--)
    {


    cin>>n>>m;
    int z=n;

    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=m;i++)
    {
        scanf("%d",&l);
        pos[l]++;
    }
    a = n;
    int ok=1;

    for(i=1;i<=z;i++)
    {
        m=0;
        for(j=1;j<=n;j++)
        {
          if(arr[j]>=m)
          {
              m = arr[j];
              k =j;
          }
        }

        for(b =k;b<=n;)
        {
            if(b==a)
            {
                ok=1;
                break;
            }

            if(pos[b]==1)
            {
                int temp = arr[b+1];
                arr[b+1]=arr[b];
                arr[b] = temp;
                b++;
            }
            else
            {
                ok=0;
                break;
            }
        }

        if(ok==0)
        {
            break;
        }
        a--;
        n--;
    }






    if(ok==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    memset(pos,0,sizeof(pos));
    }

}
