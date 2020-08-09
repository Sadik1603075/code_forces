#include<bits/stdc++.h>
using namespace std;

int arr[100005];
vector<int>v;


int main()
{
    int n,k,m,i,j;
    cin>>n>>k>>m;
    double ans,avg1=0.0;
    long long sum=0,sum1=0;


    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
        sum1+=arr[i];

    }
    sort(arr,arr+n);

    int xl= arr[n-1];

    int barano = m/k;
    sum+=(barano*k);

    avg1=(sum*1.0)/(n*1.0);
    sum=0;
    for(i=m-2;i<n;i++)
    {
        v.push_back(arr[i]);
        sum+=arr[i];
    }

    sum++;

    double avg2 =(sum*1.00)/(v.size()*1.00);

    int c=0;
    for(i=0;i<m,i<n-1;i++)
    {
        sum1-=arr[i];
        c++;
    }
    sum1++;
    m-=c;
    sum1+=m;
    n-=c;
    double avg3=(sum1*1.00)/(n*1.00);


    cout<<avg1<<endl;
    cout<<avg2<<endl;
    cout<<avg3<<endl;




}
