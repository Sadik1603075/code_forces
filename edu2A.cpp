#include<bits/stdc++.h>
using namespace std;

int arr[10];

int main()
{
    int i,j,k,l,n,m;

    string s,s1;
    cin>>n;
    cin>>s;

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            k=i;
            break;
        }
    }
    for(i=k;i<s.size();i++)
    {
        arr[s[i]-'0']++;
    }
    if(arr[1]==0)
    {
        printf("0\n");
        return 0;
    }
    s1+='1';
    l =arr[0];
    for(i=0;i<l;i++)
    {
        s1+='0';
    }
    cout<<s1<<endl;



}
