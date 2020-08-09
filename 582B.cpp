#include<bits/stdc++.h>
using namespace std;
int arr[105];


set<int>s;

int main()
{
    int i,j,k,l,n,m,cost=0,most=INT_MAX;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
        s.insert(arr[i]);
    }

    set<int>::iterator it;

    for(it=s.begin(); it!=s.end(); ++it)
    {


        cost=0;

        if(*it%2==0)
        {
            for(j=1; j<=n; j++)
            {
                if(*it==arr[j])
                    continue;


                if(arr[j]%2==1)
                    cost++;


            }
        }
        else
        {
            for(j=1; j<=n; j++)
            {
                if(*it==arr[j])
                    continue;
                if(arr[j]%2==0)
                    cost++;

            }
        }


       most=min(most,cost);
    }

    cout<<most<<endl;
}


