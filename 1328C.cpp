#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    int n,t,i;
      string s,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;

        for(i=0;i<n;i++)
        {
            if(s[i]=='2')
            {
                a+="1";
                b+="1";
            }
            else if(s[i]=='0')
            {
                a+="0";
                b+="0";
            }
            else{
                a+="1";
                b+="0";
                i++;
                break;
            }
        }
        for(;i<n;i++)
        {
            a+="0";
            b+= s[i];
        }
        cout<<a<<endl;
        cout<<b<<endl;
        a.clear();
        b.clear();

    }

    return 0;
}

