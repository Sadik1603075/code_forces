#include<bits/stdc++.h>
using namespace std;

int arr1[1000004];
int arr2[1000004];

long long csum[1000004],minn=0,sum=0,arr3[10];

int main()
{
    int i,j,k1,k2,l,m;
    int n;
    cin>>n>>k1>>k2;

    for(i=1;i<=n;i++)
    {
        cin>>arr1[i];
    }

      for(i=1;i<=n;i++)
    {
        cin>>arr2[i];
        sum +=(arr1[i]-arr2[i])*(arr1[i]-arr2[i]);
        csum[i]=sum;
    }


        minn=0;
        sum = csum[n];

        for(j=1;j<=n;j++)
        {
            sum -=(arr1[j]-arr2[j])*(arr1[j]-arr2[j]);
            sum +=(arr1[i]+k1-arr2[i]+k2)*(arr1[i]+k1-arr2[i]+k2);

            if(sum>minn)
            {
                minn=sum;
            }

        }
    arr3[0]=minn;
       minn=0;
        sum = csum[n];

        for(j=1;j<=n;j++)
        {
            sum -=(arr1[j]-arr2[j])*(arr1[j]-arr2[j]);
            sum +=(arr1[j]-k1-arr2[j]-k2)*(arr1[j]-k1-arr2[j]-k2);

            if(sum>minn)
            {
                minn=sum;
            }

        }
    arr3[1]=minn;

     minn=0;
        sum = csum[n];

        for(j=1;j<=n;j++)
        {
            sum -=(arr1[j]-arr2[j])*(arr1[j]-arr2[j]);
            sum +=(arr1[j]+k1-arr2[j]-k2)*(arr1[j]+k1-arr2[j]-k2);

            if(sum>minn)
            {
                minn=sum;
            }

        }
    arr3[2]=minn;

       minn=0;
        sum = csum[n];

        for(j=1;j<=n;j++)
        {
            sum -=(arr1[j]-arr2[j])*(arr1[j]-arr2[j]);
            sum +=(arr1[j]-k1-arr2[j]+k2)*(arr1[j]-k1-arr2[j]+k2);

            if(sum>minn)
            {
                minn=sum;
            }

        }
    arr3[3]=minn;

       minn=0;
    for(i=0;i<4;i++)
    {
        if(arr3[i]<minn)
        {
            minn=arr3[i];
        }
    }
    cout<<minn<<endl;
    return 0;




}
