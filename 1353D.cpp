#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005];

struct Node
{
    ll L,R;
};

bool operator<(Node A,Node B)
{
    ll a = A.R-A.L+1;
    ll b = B.R-B.L+1;

    if(a==b)
    {
        return A.L > B.L;
    }
    return a<b;
}

priority_queue<Node>pq;

int main()
{
    ll t,i,j,n,m;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);

        i = 1;
        ll lo,hi;
        Node x;
        x.L = 1;
        x.R = n;

        pq.push(x);

        while (i<=n)
        {
            x = pq.top();
            pq.pop();
            lo = x.L;
            hi = x.R;

            ll mid = (x.L+x.R)/2;
            arr[mid] = i;
            i++;

            Node  x ;

            x.L = lo;
            x.R = mid-1;
            pq.push(x);

            x.L = mid+1;
            x.R = hi;
            pq.push(x);
        }
        for(i=1;i<=n;i++)
        {
            printf("%lld ",arr[i]);
        }
        printf("\n");

    }
    return 0;
}

