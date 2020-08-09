#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 106
ll failure[MAX];
deque<ll>v;


void build_failure_function(string pattern)
{
    ll i,j,m=pattern.size();

    failure[0]=0;
    failure[1]=0;
    i=0;
    j=0;

    for(i=2; i<=m; i++)
    {
        j = failure[i-1];

        while(true)
        {
            if(pattern[j]==pattern[i-1])
            {
                failure[i] = j+1;
                break;
            }
            else
            {
                if(j==0)
                {
                    failure[i]=0;
                    break;
                }
                else
                {
                    j = failure[j];
                }
            }
        }
    }
}



ll kmp(string text,string pattern)
{
    ll i,j,m,n,c=0,k=0,ok,x=0;
    i=0,j=0,m=pattern.size(),n=text.size();


    while(j<=n)
    {

        if(text[j]==pattern[i])
        {
            i++;
            j++;
            if(i==m)
            {
                c++;
                i=failure[i];
            }
        }
        else
        {
            if(i==0)
            {
                j++;
            }
            else
            {
                i = failure[i];
            }
        }
    }

    return c;
}

int main()
{
    ll i,t1,n,j,k,c=0,ok=0,ans=0;
    cin>>t1;
    string s,t,s1;

    t = "abacaba";
    build_failure_function(t);


    ok=0;


    while(t1--)
    {
        cin>>n;
        cin>>s;
        s1=s;
        //n = s.ze();
        v.clear();

        ans = kmp(s,t);


        if(ans>1)
        {
            printf("No\n");
            continue;
        }
        else if(ans==1)
        {
            printf("Yes\n");
            for(i=0; i<n; i++)
            {
                if(s[i]=='?') printf("x");
                else printf("%c",s[i]);
            }
            printf("\n");
            continue;
        }
        else
        {
            c=0;
            ok=0;

            for(i=0; i+6<n; i++)
            {
                c=0;
                for(j=0 ; j<7 && i+j<n ; j++)
                {
                    if(s[i+j]==t[j] || s[i+j]=='?')
                    {
                        c++;
                    }
                    else
                        break;
                }
                if(c == 7)
                {
                    v.push_back(i);
                    ok++;
                }
            }

            ll x=0;
            if(ok){

            while(v.size())
            {
            s = s1;
            k = v.front();
            v.pop_front();


            for(i=k,j=0;i+6<n,j<7 ;i++,j++) s[i] = t[j];

            for(i=0;i<n;i++)
            {
                if(s[i]=='?') s[i] ='x';
            }
            ans = kmp(s,t);

            if(ans==1)
            {
                x=1;
                break;
            }
            }
            }

            if(x)
            {
                printf("Yes\n");
                cout<<s<<endl;
            }
            else
            {
                printf("No\n");
            }
        }

    }
}
