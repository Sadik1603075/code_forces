#include<bits/stdc++.h>
using namespace std;

int arr[1005];
int cost[1005];

set<int>st;

int main()
{
    int i,j,k,l,n,sum=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        sum +=arr[i];
        st.insert(arr[i]);
    }
    int avg = sum/n,mx=INT_MAX;
    st.insert(avg);

    vector<int>v(st.begin(),st.end());

    for(i=0;i<v.size();i++)
    {
        for(j=1;j<=n;j++)
        {
            cost[v[i]]+= abs(arr[j]-v[i]);
        }
        mx= min(mx,cost[v[i]]);
        cout<<v[i]<<"  "<<cost[v[i]]<<"  "<<endl;
    }
}
