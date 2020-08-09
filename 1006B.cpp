#include<bits/stdc++.h>
using namespace std;

int arr[2005];
vector<int>v;
int arr1[20005];
int arr2[20005];



int main()
{
    int i,j,k,l,n,m,sum=0,c;
    scanf("%d%d",&n,&k);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr2[i]=arr[i];

    }
    l=k;

    sort(arr,arr+n);
    for(i=n-1;;i--)
    {
        if(l==0)
            break;
        sum+=arr[i];
        arr1[arr[i]]++;
        l--;
    }
    cout<<sum<<endl;
    c=0;
    for(i=0;i<n;i++)
    {
        c++;
        if(arr1[arr2[i]])
        {
            arr1[arr2[i]]--;
            v.push_back(c);
            c=0;
        }
    }
    for(i=0;i<v.size();i++)
    {
        if(i==v.size()-1)
            v[i]+=c;
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;

}

