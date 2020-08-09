#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005];
ll b[100005];
ll ans[100005];

int main()
{
    ll n,t,i;
    cin>>t;


    while(t--)
    {
        scanf("%lld",&n);

        for(i=1; i<=n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&b[i]);
        }
        ll pos=0;
        ll neg =0;
        for(i=1; i<=n; i++)
        {
            if(a[i]==1)
            {
                pos++;
            }
            else if(a[i]==-1)
            {
                neg++;
            }


            if(pos>=1 && neg >=1)
            {
                ans[i] =2;
            }
            else if(pos>=1)
            {
                ans[i] = 1;
            }
            else if(neg>=1)
            {
                ans[i] =-1;
            }
            else
                ans[i] =0;
        }

        if(a[1]!= b[1])
        {
            printf("No\n");
            continue;
        }
        ll ok =1;
        for(i=2; i<=n; i++)
        {
            if(b[i]>0)
            {
                if(a[i]==0)
                {
                    if(ans[i-1]>=1)
                    {
                        ok =1;
                    }
                    else
                    {
                        ok =0;
                    }
                }
                else if(a[i]==1)
                {
                    if(b[i]==1)
                    {
                        ok=1;
                    }
                    else
                    {
                        if(ans[i-1]>=1)
                        {
                            ok =1;
                        }
                        else
                        {
                            ok =0;
                        }

                    }

                }
                else
                {
                    if(ans[i-1]>=1)
                    {
                        ok =1;
                    }
                    else
                    {
                        ok =0;
                    }

                }
            }
            else if(b[i]<0)
            {
                if(a[i]>=0)
                {
                    if(ans[i-1]==-1 || ans[i-1]==2)
                    {
                        ok =1;
                    }
                    else
                    {
                        ok =0;
                    }

                }
                else
                {
                    if(a[i]==b[i])
                    {
                        ok=1;
                    }
                    else
                    {
                        if(ans[i-1]==-1 || ans[i-1]==2)
                        {
                            ok =1;
                        }
                        else
                        {
                            ok =0;
                        }

                    }

                }

            }
            else
            {
                if(a[i]==0)
                {
                    ok=1;
                }
                else if(a[i]==1)
                {
                    if(ans[i-1]==-1 || ans[i-1]==2)
                    {
                        ok =1;
                    }
                    else
                    {
                        ok =0;
                    }

                }
                else
                {
                    if(ans[i-1]>=1)
                    {
                        ok =1;
                    }
                    else
                    {
                        ok =0;
                    }

                }

            }

            if(ok==0)
                break;
        }

        if(ok)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }



    }

    return 0;
}

