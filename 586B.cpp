#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
    int i,j,k,l=0,n,m;
    cin>>n;
    cin>>s;

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='z')
            l++;
    }
    k = (l*3) + l;
    j = n-k;
    j /=3;

    for(i=0;i<j;i++)
    {
        printf("1 ");
    }
    for(i=0;i<l;i++)
    {
        printf("0 ");
    }
    printf("\n");
    return 0;


}
