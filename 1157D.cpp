#include<bits/stdc++.h>
using namespace std;
vector<long long>v;

int main()
{
    int n,i,j,k,l,diff=INT_MAX;
    cin>>n>>k;
    int l1,l2,l3;

    long long sum=0;

    l = (k*(k+1))/2;
    if(l>n)
    {
        printf("NO\n");
        return 0;
    }
    else if(l==n)
    {
        printf("YES\n");

        for(i=1; i<=k; i++)
        {
            printf("%d ",i);
        }
    }
    else
    {

        j = (n-l)/k;

        v.push_back(0);
        v.push_back(j+1);

        sum+=j+1;

        for(i=2; i<=k; i++)
        {
            v.push_back(j+i);
            sum+=j+i;
        }

        diff = (n-sum);




        for(i=k; i>=3; i--)
        {


            l1 = v[i-1]*2;

            l2 = l1-v[i];

            l3 = l2 - diff;

            if(l3>=0)
            {
                v[i]+=diff;
                sum+=diff;
                diff=0;
                break;
            }
            else
            {
                v[i]+=l2;
                sum+=l2;
                diff-=l2;

                if(diff==0)
                    break;

            }

        }

        if(k==2)
        {

            l1 = v[1]*2;

            l2 = l1-v[2];

            l3 = l2 - diff;
            if(l3>=0)
            {
                v[i]+=diff;
                sum+=diff;
                diff=0;
            }

        }


        if(diff==0&&sum==n)
        {
            cout<<"YES"<<endl;

            for(i=1; i<=k; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
