#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,q;
    cin>>q;
    string s;
    for(i=0; i<q; i++)
    {
        cin>>n;
        cin>>s;
        l = s.size();
        if(l==2)
        {
            if(s[0]==s[1])
            {
                printf("NO\n");

            }
            else
            {
                int a= s[0]-'0';
                int b= s[1]-'0';
                if(a<b)
                {
                    printf("YES\n2\n%d %d\n",a,b);
                }
                else
                {
                    printf("NO\n");

                }
            }
            continue;
        }
        cout<<"YES"<<endl;

        cout<<2<<endl;
        cout<<s[0]<<" ";
        for(j=1; j<l; j++)
        {
            cout<<s[j];
        }
        cout<<endl;

    }
}
