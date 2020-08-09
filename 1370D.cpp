#include<bits/stdc++.h>
using namespace std;
#define ll long long


struct node
{
    ll val, pos;
};

bool cmp(node A,node B)
{
    return A.val<B.val;
}
node arr[200005];


int main()
{
    ll i,n,t,k,j;
        cin>>n>>k;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i].val);
            arr[i].pos=i;

              //cout<<arr[i].val<<" "<<arr[i].pos<<endl;
        }
        sort(arr+1,arr+1+n,cmp);


        ll mx1=0,mx2=0;


        if(n%2==0)
        {
            ll c=1,x=arr[1].pos;
            j=1;

            if(arr[1].pos==1)
            {
                x = arr[2].pos;
                j = 3;

            }
            for(i=j;i<=n;i++)
            {
                if(arr[i].pos-x>=2)
                {
                    mx1 = max(arr[i].val,mx1);
                    x = arr[i].pos;
                    c++;
                }
                if(c==n/2)
                    break;
            }

            c=1,x=arr[1].pos;
            j=1;

            for(i=j;i<=n;i++)
            {
                if(arr[i].pos-x>=2)
                {
                    mx2 = max(arr[i].val,mx2);
                    x = arr[i].pos;
                    if(x==n)
                        continue;
                    c++;
                }
                if(c==n/2)
                    break;
            }
            cout<<mx1<<" "<<mx2<<endl;
            cout<<min(mx1,mx2)<<endl;

        }
        else
        {
            ll c=1,x=arr[1].pos;
            j=1;


            for(i=j;i<=n;i++)
            {
                if(arr[i].pos-x>=2)
                {
                    mx1 = max(arr[i].val,mx1);
                    x = arr[i].pos;
                    c++;
                }
                if(c==n/2 + 1)
                    break;
            }

            c=1,x=arr[1].pos;
            j=1;

            if(arr[1].pos==1)
            {
                x = arr[2].pos;
                j = 3;

            }
            for(i=j;i<=n;i++)
            {
                if(arr[i].pos-x>=2)
                {
                    mx2 = max(arr[i].val,mx2);
                    x = arr[i].pos;
                    if(x==n)
                        continue;

                    c++;
                }
                if(c==n/2)
                    break;
            }
            cout<<min(mx1,mx2)<<endl;

        }



}

