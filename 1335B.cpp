#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];
vector<char>s;

void gen()
{
    int i,j,k;

    for(i=1; i<=80; i++)
    {

        char ch ='a';
        for(j=0; j<26; j++)
        {
            s.push_back(ch);
            ch++;
        }

    }

}

int main()
{
    ll i,j,n,t,m,a,b;
    cin>>t;
    gen();

    while(t--)
    {
        scanf("%lld%lld%lld",&n,&a,&b);

        if(a==b){
        for(i=0; i<n; i++)
        {
            cout<<s[i];
        }
        cout<<endl;

        }
        else
        {
            string s1,s2;
            char ch = 'a';
            for(i=0;i<b;i++)
            {
                s1.push_back(ch);
                ch++;
            }
            ch--;
            for(i=0;i<a-b;i++)
            {
                s1.push_back(ch);
            }
            m = (n/a)+1;
            for(i=0;i<m;i++)
            {
                s2+=s1;
            }

            for(i=0;i<n;i++)
            {
                cout<<s2[i];
            }
            cout<<endl;
            s1.clear();
            s2.clear();

        }

    }
    return 0;
}

