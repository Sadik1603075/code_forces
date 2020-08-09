#include<bits/stdc++.h>
using namespace std;

int arr[105];

int main()
{
    int i,j,k,l,m=1000,n,t,d,x,p;
    cin>>t;

    for(j=1;j<=t;j++)
    {
        cin>>n>>k>>d;
        m =1000;

        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }

        for(i=1;i<=n;i++)
        {
            set<int>s;

            if(i+d<=n+1){
            for(x=i;x<d+i;x++)
            {
                s.insert(arr[x]);
            }
            if(s.size()< m)
            {
                m = s.size();
                p = i;

            }
            }

        }

        cout<<m<<endl;

    }



    return 0;
}
