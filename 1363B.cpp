#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[10];

int main()
{
    ll t,n,i,x,j,val,ans,zero,one;
    string s;

    cin>>t;
    while(t--)
    {
        cin>>s;
        val = s.size();
        ans = INT_MAX;
        zero=one=0;



        for(i=0;i<val ;i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }

        ll z1=0,z2=0;

        for(i=0;i<val;i++)
        {
            if(s[i]=='0')
                z1++;
            if(s[i]=='1')
                z2++;

            ans = min(ans,z1+one-z2);
            ans = min(ans,z2+zero-z1);
        }


        // All Zero
        x=0;
        for(i=0; i<val; i++)
        {
            if(s[i]=='1')
                x++;
        }
        ans = min(ans,x);


        //All One
        x=0;
        for(i=0; i<val; i++)
        {
            if(s[i]=='0')
                x++;
        }
        ans = min(ans,x);

        cout<<ans<<endl;
    }
}

//10111101000010100


