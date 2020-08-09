#include<bits/stdc++.h>
using namespace std;

int arr[15];

int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        cin>>n;
        string s,t;
        cin>>s>>t;
        m=0;
        l=1;
        for(i=0;i<n;i++)
        {
            if(m>3)
                break;

            if(s[i] != t[i])
            {
                m++;
                arr[l]= i;
                l++;
            }
        }

        if(m>2||m==1)
        {
            printf("NO\n");
        }
        else
        {
            if(s[arr[1]]==s[arr[2]] && t[arr[1]]==t[arr[2]])
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }


    }

    return 0;
}
