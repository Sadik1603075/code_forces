#include<bits/stdc++.h>
using namespace std;
int arr[15];

int main()
{
    int i,j,k,l,m,n,t,r,g,b;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        cin>>r>>g>>b;

        arr[0] = r;
        arr[1] = g;
        arr[2] = b;



        sort(arr,arr+3);

        long long sum =0;

        if(r==g && g==b && b==1)
        {
            cout<<1<<endl;
            continue;
        }

        if(r==g && g==b )
        {
            cout<<r+1<<endl;
            continue;
        }

        if(arr[0]+arr[1]>=arr[2])
        {
            cout<<(arr[0]+arr[1]+arr[2])/2<<endl;
        }
        else
        {
            cout<<arr[0]+arr[1]<<endl;
        }


    }

}
