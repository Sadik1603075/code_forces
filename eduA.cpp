#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,c=0,n;
    cin>>n;
    cin>>s;

    for(i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {c++;
        i++;}
    }
    cout<<n-c<<endl;
    return 0;
}
