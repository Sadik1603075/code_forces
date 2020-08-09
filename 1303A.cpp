#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,t,n,j,l,k;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        l = s.size();
        if(l==1)
        {
            printf("0\n");
            continue;
        }
        int c=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='1')
            {
                j = i;
                c=1;
                break;
            }
        }
        k=0;
        if(i!=l){
        for(i=l-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                k = i;
                c=1;
                break;
            }
        }
        }
        int sum=0;

        if(c==1)
        {

        for(i=j;i<=k;i++)
        {
            if(s[i]=='0')
            {
               sum++;
            }
        }
        }

        cout<<sum<<endl;
    }
}
