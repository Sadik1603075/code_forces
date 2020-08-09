#include<bits/stdc++.h>
using namespace std;

long long arr[104];

int main()
{
    long long i,j,k,l,m,q,n;
    cin>>q;

    for(k=1; k<=q; k++)
    {

        long long sum=0,price=0,finalp,m=0,no=10000007,mid;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&arr[i]);
            sum+=arr[i];
            m = max(m,arr[i]);
            no = min(no,arr[i]);
        }

        price = sum/n;
        finalp =0;

        long long low = no;
        long long high = m;

        while(low<=high)
        {
            mid = (low+high)/2;

            if(mid*n>=sum)
            {
                finalp=mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }

        printf("%lld\n",finalp);
    }

}
