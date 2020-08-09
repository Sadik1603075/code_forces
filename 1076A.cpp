#include<bits/stdc++.h>
using namespace std;

//string s[2*100005];

int main()
{
    int i,j,n,l;
    scanf("%d",&n);
    string s;
    l=n-1;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i]>s[i+1])
        {
           l = i;
           break;
        }
    }

    for(i=0;i<n;i++)
    {
        if(i==l)
            continue;
        else
            printf("%c",s[i]);
    }
    printf("\n");
    return 0;
    //cout<<s3<<endl;
}
