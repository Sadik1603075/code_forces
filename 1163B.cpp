#include<bits/stdc++.h>
using namespace std;

int arr[11];
int arr1[100005];

int main()
{
    int n,i,j,k,l=0,x=0,p=0;
    cin>>n;



    for(i=0;i<n;i++)
    {
        scanf("%d",&l);
        arr1[i] =l;
    }

   k=0;
   l=0;

   arr[arr1[0]]++;

   for(i=1;i<n;i++)
   {
       if(arr1[i]==arr1[i-1])
       {
           arr[arr1[i]]++;
        }
       else
        {
            k=i;
            break;
        }
   }
   cout<<k<<endl;

   int c1=0,c2=0,c3=0;

   l=k;

   c1= arr[arr1[0]];


   for(i=k;i<n;i++)
   {
       arr[arr1[i]]++;
       l++;

       for(j=i+1;j<n;j++)
       {
           if(arr1[j]==arr1[j-1])
           {
                c2=arr[arr1[j]]++;
                l++;

                if(c2>c1+1)
                {
                    p=1;
                    break;
                }
           }
           else
           {
               i=j-1;
               break;
           }
       }

       if(p)
        break;

       c2 = arr[arr1[j-1]]++;

       if(c1!=c2)
        x++;

       if(x==2)
        break;
   }

   cout<<l<<endl;

}
