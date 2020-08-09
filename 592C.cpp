#include<bits/stdc++.h>
using namespace std;

#define ll long long

long long arr1[2*100005];
long long arr2[2*100005];

deque<long long>d,d1;


int main()
{
    long long i,j,l,m1,x,y,a,b,q,n,m2,ans,t;
    cin>>q;
    long long k,sum=0,ss=0;

    for(t=1; t<=q; t++)
    {
        scanf("%lld",&n);
        sum=0;
        d.clear();
        d1.clear();
        memset(arr1,0,sizeof(arr1));
        memset(arr2,0,sizeof(arr2));

        for(i=0; i<n; i++)
        {
            scanf("%lld",&l);
            d.push_back(l);
        }
        scanf("%lld%lld",&x,&a);
        scanf("%lld%lld",&y,&b);
        scanf("%lld",&k);

        sort(d.begin(),d.end());


        if(a==b)
        {

            for(i=a; i<=n; i+=a)
            {
                m1 = d.back();
                arr1[i] = m1;
                d1.push_back(m1);
                d.pop_back();
            }

            for(i=1; i<=n; i++)
            {
                if(arr1[i]==0)
                {
                    m1 = d.back();
                    arr1[i] = m1;
                    d1.push_back(m1);
                    d.pop_back();
                }
            }
                long long g = x+y;

            for(i=1; i<=n; i++)
            {
                if(i%a==0)
                {

                    ss =arr1[i]*g;
                    sum+=(ss/100);

                }
                if(sum>=k)
                    break;
            }

            if(sum>=k)
                ans = i;
            else
            {
                ans =0;
            }

            if(ans==0)
                printf("-1\n");
            else
                printf("%lld\n",ans);

            continue;
        }



        for(i=a; i<=n; i+=a)
        {
            m1 = d.back();
            arr1[i] = m1;
            d1.push_back(m1);
            d.pop_back();
        }


        for(i=b; i<=n; i+=b)
        {
            if(arr1[i]==0){
            m1 = d.back();
            arr1[i] = m1;
            d1.push_back(m1);
            d.pop_back();
            }
        }

        for(i=1; i<=n; i++)
        {
            if(arr1[i]==0)
            {
                m1 = d.back();
                arr1[i] = m1;
                d1.push_back(m1);
                d.pop_back();
            }
        }

        for(i=1; i<=n; i++)
        {
             if(i%a==0)
            {
                sum += (arr1[i]*x)/100;
            }

            if(i%b==0)
            {
                sum += (arr1[i]*y)/100;
            }
            if(sum>=k)
                break;
        }
        if(sum>=k)
            ans = i;
        else
        {
            ans =0;
        }

        sum=0;

        for(i=b; i<=n; i+=b)
        {
            m1 = d1.front();
            arr2[i] = m1;
            d1.pop_front();
        }

        for(i=a; i<=n; i+=a)
        {
            if(arr2[i]==0)
            {
                m1 = d1.front();
                arr2[i] = m1;
                d1.pop_front();
            }
        }
        for(i=1;i<=n;i++)
        {
            if(arr2[i]==0)
            {
                m1 = d1.front();
                arr2[i] = m1;
                d1.pop_front();
            }
        }


        for(i=1; i<=n; i++)
        {
            if(i%a==0)
            {
                sum += (arr2[i]*x)/100;
            }

            if(i%b==0)
            {
                sum += (arr2[i]*y)/100;
            }
            if(sum>=k)
                break;
        }
        if(sum<k && ans==0)
        {
            ans=0;
        }

        if(ans==0)
        {
            printf("-1\n");
            continue;
        }

        ans = min(i,ans);

        printf("%lld\n",ans);

    }
}
