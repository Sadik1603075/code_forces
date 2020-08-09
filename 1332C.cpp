#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005][30];
int main()
{
    ll t,n,k,i,j;
    cin>>t;
    string s,s1;

    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        s1 = "#"+s;
        s=s1;
        memset(arr,0,sizeof(arr));
        ll z= k/2;
        if(k%2)
            z++;
        ll sum1=0,mx=0;
        for(j=1; j<=z; j++)
        {
            mx=0;
            ll c=0;
            arr[j][s[j]-'a']=0;
            arr[j][s[j]-'a']++;
            mx = max(mx,arr[j][s[j]-'a']);
            c++;

            if(k%2==1 && j == (k/2)+1)
            {
                for(i=1; i*k+j<=n; i++)
                    {
                        arr[j][s[i*k + j]-'a']++;
                         mx = max(mx,arr[j][s[i*k+j]-'a']);
                        c++;
                    }
                arr[j][200003] = c;
                sum1 +=(c-mx);
                continue;
            }

            for(i=1; i*k<=n; i++)
            {
                arr[j][s[i*k - j + 1]-'a']++;
                c++;
                mx = max(mx,arr[j][s[i*k - j + 1]]);

                if(i*k +i <=n)
                   {
                       arr[j][s[i*k+j]-'a']++;
                         mx = max(mx,arr[j][s[i*k + j]]);
                       c++;
                   }
            }
            arr[j][200003] = c;
            sum1+=(c-mx);
        }
        cout<<sum1<<endl;
        ll sum=0;

        for(i=1;i<=z;i++)
        {
            mx=0;
            for(j=0;j<26;j++)
            {
                if(arr[i][j]>mx)
                {
                    mx = arr[i][j];
                }
            }

            sum +=(arr[i][200003]-mx);
        }
        cout<<sum<<endl;
    }
    return 0;
}
