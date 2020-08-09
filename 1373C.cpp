#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1000006];

int main()
{
    ll t,n,i,j;
    cin>>t;
    string s;

    while(t--)
    {
        cin>>s;

        n = s.size();
        ll res=0,ok=0,cur=0,mi=0;
        ll p_cur=0;

        for(i=0;i<n;i++)
        {
            if(s[i]=='-')
            {
               if(cur<0)
                arr[i] = (i+1);
               else
                arr[i]=1;
             cur -=1;
            }
            else
            {
                if(cur<0)
                    {
                        arr[i] = i+1;
                        cur=1;
                    }
                else
                    {
                        arr[i] = 1;
                        cur++;
                    }
            }

        }

        if(cur<0)
            res+=n;
        for(i=0;i<n;i++)
                res+=abs(arr[i]);


        cout<<res<<endl;



    }
    return 0;
}


