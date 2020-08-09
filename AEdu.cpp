#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int main()
{
    int n,m,i,j,minn=2000;
    cin>>n>>m;


    for(i=0;i<m;i++)
    {
        cin>>j;
        arr[j]++;
    }
    for(i=1;i<=n;i++)
    {

      minn=min(minn,arr[i]);
    }
    cout<<minn<<endl;
    return 0;
}
