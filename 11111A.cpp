#include<bits/stdc++.h>
using namespace std;

int arr[1000006];
vector<int>v;


int main()
{
    int k,l,m,n,i,j;
    cin>>n;
    long long sum=0;
    int ok =1;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];

        if(sum<0)
        {
            ok=0;
        }

        if(sum==0)
        {
            v.push_back(i);
        }
    }

    if(sum!=0 || ok==0)
    {
        printf("-1\n");
        return 0;
    }

    int day=1;
     sum=0;

    for(i=0;i<v.size();i++)
    {
        for(j=day;j<=v[i];j++)
        {
            sum +=arr[j];
        }

        if(sum>0)
        {

            ok=0;
            break;
        }
        day+=v[i];
    }
    if(ok==0)
    {
        printf("-1\n");
    }
    else
    {
       cout<<v.size()<<endl;

       day=0;
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i]-day<<" ";
            day =v[i];
        }
    }
}
