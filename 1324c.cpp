#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;
    string s;

    while(t--)
    {
        cin>>s;
        l =s.size();

        m =0;
        k =0;

        for(i=0; i<l; i++)
        {
            if(s[i]=='L')
            {
                k++;
                 m = max(k,m);
            }
            else
            {
                k =0;

            }
        }
        printf("%d\n",m+1);
    }
}
