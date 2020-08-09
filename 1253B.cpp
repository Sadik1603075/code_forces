#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
bool arr1[1000005];
int arr2[1000005];

vector<int>v;
vector<int>v1;

int main()
{
    int i,j,k,day=0,m,n,t,ok=1,l;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        scanf("%d",&l);
        m = abs(l);
        arr2[i]=l;

        if(arr1[l]==0&&l>0)
        {
            v1.push_back(l);
            arr1[l]=1;
        }




        if(arr[m]==0)
        {

            if(l<0)
                ok=0;

            arr[m] +=l;

            continue;
        }

        else if(arr[m]==m)
        {
            if(l>0)
                ok=0;
            arr[m] =10000007;
            continue;

        }
        else if(arr[m]==10000007)
        {
            v.push_back(i-1);
            arr[m]=m;
        }

    }
    v.push_back(n);

    for(i=0; i<v1.size(); i++)
    {

        if(arr[v1[i]]!=10000007)
        {
            ok=0;
            break;


        }
    }
    day=1;
    long long sum=0;

    for(i=0;i<v.size();i++)
    {
        for(j=day;j<=v[i];j++)
        {
            sum +=arr2[j];
        }

        if(sum>0)
        {

            ok=0;

            break;
        }
        day+=v[i];
    }

    if(ok)
    {


        cout<<v.size()<<endl;
        day=0;
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i]-day<<" ";
            day +=v[i];
        }


    }
    else
    {
        printf("-1\n");
    }


    return 0;
}
