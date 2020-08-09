#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
int main()
{
    int i,j,n,l,k=0,k1=0,x=0,y=0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(i=0;i<n;i++)
    {
        if(s1[i]=='0')
            k++;
        else if(s1[i]=='1')
            k1++;


        if(s1[i]=='0'&&s2[i]=='0')
            y++;
        else if(s1[i]=='1'&&s2[i]=='0')
            x++;
    }

    cout<<(k*x)+(k1*y)-(x*y)<<endl;

    return 0;

}
