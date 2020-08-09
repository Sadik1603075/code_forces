#include<bits/stdc++.h>
using namespace std;
deque<long long>v;
map<long long,long long>arr;

void primefactor(long long n)
{
    int x=0;
    while(n%2==0)
    {
        if(arr[2]==0)
        {
            v.push_back(2);
        }
        n= n/2;
        arr[2]++;
        x=1;
    }
    long long l = sqrt(n);
    for(long long i =3 ; i<=l ; i+=2)
    {
        while(n%i==0)
        {
            if(arr[i]==0)
            {
                v.push_back(i);
            }
            n = n/i;
            arr[i]++;
            x=1;
        }
    }
    if(n>2)
    {
        arr[n]++;
        v.push_back(n);
    }
}

long long pow1(long long n,long long m)
{
    long long sum=1;
    for(long long i=1; i<=m; i++)
    {
        sum *=n;
    }
    return sum;
}

int main()
{
    long long i,j,k,l,t,n,m,sum=1,l1,l2,l3;
    cin>>t;

    for(k=1; k<=t; k++)
    {

        arr.clear();
        v.clear();

        scanf("%lld",&n);
        primefactor(n);
        sum=1;
        l = v.size();
        if(v.size()>=3)
        {
            m = v.front();
            l1 = pow1(m,arr[m]);
            v.pop_front();

            m = v.front();
            l2 = pow1(m,arr[m]);
            v.pop_front();

            for(i=1; i<=l-2; i++)
            {
                m = v.front();
                sum *= (pow1(m,arr[m]));
                v.pop_front();

            }


            printf("YES\n");
            printf("%lld %lld %lld\n",l1,l2,sum);
        }
        else if(v.size()==2)
        {
            sum=1;
            m = v.front();
            arr[m]--;
            l1 = m;
            v.pop_front();

            m = v.front();
            arr[m]--;
            l2 = m;
            v.pop_front();

            if(arr[l1]!=0)
            {
                sum *= (pow1(l1,arr[l1]));
            }
            if(arr[l2]!=0)
            {
                sum *= (pow1(l2,arr[l2]));
            }

            if(sum!=l1 &&sum!=l2 && sum!=1 )
            {
                printf("YES\n");
                printf("%lld %lld %lld\n",l1,l2,sum);
            }
            else
            {
                printf("NO\n");
            }
        }
        else if(v.size()==1)
        {
            m = v.front();
            arr[m]--;
            l1 = m;
            sum=1;

            if(arr[m]<=4)
            {
                printf("NO\n");
                continue;
            }
            l2 = pow1(m,2);
            arr[m]-=2;
            sum = pow1(m,arr[m]);

            printf("YES\n");
            printf("%lld %lld %lld\n",l1,l2,sum);

        }
        else
        {
            printf("NO\n");
        }

    }
}
