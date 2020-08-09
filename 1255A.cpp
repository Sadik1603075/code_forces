#include<bits/stdc++.h>
using namespace std;

 struct data
{
    int id,value;
};

 bool cmp(data a,data b)
{
    if(a.value<b.value)
    {
        return true;
    }
    return false;
}

data arr[10005];
vector<int>v;

int main()
{
    int i,j,k,l,m,n,t,sum=0;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        sum=0;
        scanf("%d%d",&n,&m);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i].value);
            arr[i].id = i;
            sum +=arr[i].value;
        }
        sum*=2;

        if(m<n)
        {
            printf("-1\n");
            continue;
        }


        sort(arr+1,arr+n+1,cmp);



        m -= n;

        for(i=1;i<=m;i++)
        {
            sum += arr[1].value+arr[2].value;
        }

        cout<<sum<<endl;

        for(i=1;i<n;i++)
        {
            printf("%d %d\n",arr[i].id,arr[i+1].id);
        }

        printf("%d %d\n",arr[n].id,arr[1].id);

        for(i=1;i<=m;i++)
        {
            printf("%d %d\n",arr[1].id,arr[2].id);
        }


        memset(arr,0,sizeof(arr));

    }




    return 0;
}

