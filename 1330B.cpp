#include<bits/stdc++.h>
using namespace std;

int arr[200005];
int arr1[200005];
int arr2[200005];
int visited[200005];
deque<int>dq;

int main()
{
    int i,n,x,j,t,m=0,bb=0;
    cin>>t;
    while(t--)
    {
        bb++;
        cin>>n;
        m=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&arr2[i]);
            arr1[i]=arr2[i];
            //arr2[i]=arr[i];
            visited[arr2[i]]++;
        }
        int ans =0;

        for(i=1; i<=n-1; i++)
        {
            if(visited[i]==2)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        if(ans==0)
        {
            cout<<0<<endl;
            continue;
        }
        sort(arr1+1,arr1+ans+1);
        for(i=1; i<=ans; i++)
        {
            if(arr1[i]!=i)
            {
                break;
            }
        }

        m = n- ans;

        if(ans==i-1)
        {
            sort(arr1+i,arr1+n+1);
            int u=1;
            for(i=ans+1; i<=n; i++)
            {
                if(arr1[i]==u)
                {
                    u++;
                }
                else
                    break;
            }
            if(u-1==m)
            {
                dq.push_back(ans);
                dq.push_back(n-ans);
            }
        }
        sort(arr2+(n-ans+1),arr2+n+1);
        int u=1;
        for(i=n-ans+1; i<=n; i++)
        {
            if(arr2[i]==u)
            {
                u++;
            }
            else
                break;
        }

        if(u-1==ans)
        {
            sort(arr2+1,arr2+(n-ans+1));

            for(i=1; i<=n-ans; i++)
            {
                if(arr2[i]!=i)
                {
                    break;
                }
            }

            if(i-1==m)
            {
                dq.push_back(n-ans);
                dq.push_back(ans);

                if(dq[0]==dq[1])
                {
                    cout<<1<<endl;
                    cout<<dq[0]<<" "<<dq[1]<<endl;
                    continue;

                }
            }
        }
        //cout<<"Test Case NO : "<<bb<<endl;
        if(dq.size()==0)
        {
            cout<<0<<endl;
        }
        else if(dq.size()==2)
        {
            cout<<1<<endl;
            cout<<dq[0]<<" "<<dq[1]<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<dq[0]<<" "<<dq[1]<<endl;
            cout<<dq[2]<<" "<<dq[3]<<endl;
        }
        memset(visited,0,sizeof(visited));
        dq.clear();

    }
    return 0;
}

