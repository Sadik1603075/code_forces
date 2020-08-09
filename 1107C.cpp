#include<bits/stdc++.h>
using namespace std;

int arr[2*100005];
vector<int>v[2*100005];

int main()
{
    int n,k,i,j,l,x,z;
    cin>>n>>k;
    string s;
    long long sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    cin>>s;
    l = s.size();

    for(i=0; i<n; )
    {
        j=i;
        while(s[i]==s[j])
        {
            v[i].push_back(arr[j++]);
        }

        sort(v[i].begin(),v[i].end());

        for(z=v[i].size()-1,x=1 ; z>=0; z--,x++)
        {
            if(x==k+1)
                break;
            sum+=v[i][z];
        }
        i=j;

    }

    cout<<sum<<endl;
}
