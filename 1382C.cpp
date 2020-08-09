#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1003];
vector<ll>v;

ll op(string s1,string s2,ll pos,ll turn)
{
    ll i,j=0,a,b;
    if(turn%2==0)
    {

        for(i=pos; i>=0; i--)
        {
             a = s1[i]-'0';
             b = s2[i]-'0';
            if(a==b)
                j++;
            else
                break;
        }


        }
    else
    {
        for(i=pos; i>=0; i--)
        {
             a = s1[i]-'0';
             a ^=1;
             b = s2[i]-'0';

            if(s1[i]!=s2[i])
                j++;
            else
                break;
        }

    }

    return i;

}

int main()
{
    ll t,i,n,j,turn=0,a,b;
    cin>>t;

    string s1,s2;

    while(t--)
    {
        scanf("%lld",&n);
        cin>>s1>>s2;
        ll l1 = s1.size();
        ll l2= s2.size();
        ll c=0;
        turn =0;
        for(i=n-1; i>=0; i++)
        {
            if(s1[i]==s2[i])
                c++;
            else
                break;
        }
        if(c==n)
        {
            printf("0\n");
            continue;
        }

        for( ; i>=0; i--)
        {
            if(turn%2==0)
            {
                 a = s1[i]-'0';
                 b = s2[i]-'0';

                if(a!= b)
                {
                    v.push_back(i+1);
                    turn++;
                }
                else
                {
                    ll ans = op(s1,s2,i,turn);

                    if(ans==0)
                    {
                        v.push_back(i);
                        break;
                    }
                    i = ans+1;
                }

            }
            else
            {
                  a = s1[i]-'0';
                 a ^=1;
                  b = s2[i]-'0';

                if(a==b)
                {
                    v.push_back(i+1);
                    turn++;
                }
                else
                {
                    ll ans = op(s1,s2,i,turn);

                    if(ans==0)
                    {
                        v.push_back(i);
                        break;
                    }
                    i = ans+1;
                }
            }
            cout<<a<<" "<<b<<" "<<i<<endl;

        }

        cout<<v.size()<<" ";

        for(i=0; i<v.size(); i++)
            printf("%lld ",v[i]);
        printf("\n");
        v.clear();


    }
}
