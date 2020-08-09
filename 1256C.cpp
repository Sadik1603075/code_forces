#include<bits/stdc++.h>
using namespace std;
int arr[1000006];
vector<int>v;
int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;

    for(k=1; k<=t; k++)
    {
        scanf("%d%d",&n,&m);
        string s;

        cin>>s;

        for(i=0; i<n; i++)
        {
            if(s[i]=='0')
                v.push_back(i);
            arr[i]=1;
        }
        i=0;

        while(m>0)
        {
            if(i==v.size())
                break;
            if(m>=v[i])
            {
                m-=v[i]-i;
                arr[i] =0;
            }
            else
            {
                arr[v[i] - m] =0;
                m=0;

            }
            i++;
        }
        for(i=i; i<v.size(); i++)
            arr[v[i]] =0;


        for(i=0; i<n; i++)
        {
            if(arr[i]==0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");


        v.clear();

    }
}
