#include<bits/stdc++.h>
using namespace std;

int arr[2*100005];
bool visited[2*100005];
deque<int>v;

int main()
{
    int i,j,k,l,n,m;
    cin>>n;

    for(k=1; k<=n; k++)
    {
        scanf("%d",&l);
        arr[k] = l;
        visited[l] = true;
    }

    for(i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            v.push_back(i);
        }
    }

    for(i=1; i<=n; i++)
    {
        if(arr[i]==0 && visited[i]==false)
        {
            if(v.front()!=i)
            {
                arr[i] = v.front();
                v.pop_front();
            }

            else
            {
                arr[i] = v.back();
                v.pop_back();
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        if(arr[i]==0)
        {
            arr[i]= v.front();
            v.pop_front();
        }
    }

    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");



    return 0;

}
