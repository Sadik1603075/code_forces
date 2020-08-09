#include<bits/stdc++.h>
using namespace std;
int arr[5];

int main()
{
    int i,j=0,k=0,l=0;
    string s,s1;
    cin>>s;


      for(i=0;i<s.size();i++)
    {
        arr[s[i]-'a']++;

    }

    for(i=0;i<s.size()-1;i++)
    {
        if(s[i]<=s[i+1])
            l=1;
        else
        {l=0;
        break;}
    }
    if((arr[0]==arr[2]||arr[1]==arr[2])&&l==1&&arr[0]>0&&arr[1]>0&&arr[2]>0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
