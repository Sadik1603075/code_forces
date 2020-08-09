#include<bits/stdc++.h>
using namespace std;

vector<int >v;
bool arr[100005];
int bar[100005];



int main()
{
    int i,j,k,l,m,n,t,x=0,y,r,hi=0,c=0;
    cin>>t;

    for(k=1;k<=t;k++)
    {

        scanf("%d%d",&n,&r);
        m=n;
        for(i=0;i<n;i++)
        {
            scanf("%d",&l);
            if(arr[l]==false)
            {
                v.push_back(l);
                arr[l]=true;

            }

            if(l%r==0)
            {
                bar[l] = l/r;
            }
            else
            {
                bar[l] = (l/r) + 1;
            }
        }

        sort(v.begin(),v.end());


        c=1;

        hi = v[v.size()-1];

        for(i=v.size()-1;i>=1;i--)
        {
            bar[v[i]] = 0;
            bar[v[i-1]] -=c;
            if(bar[v[i-1]]<=0)
                break;
            c++;

        }
        printf("%d\n",c);

       memset(arr,false,sizeof(arr));

        v.clear();
    }
    return 0;

}
