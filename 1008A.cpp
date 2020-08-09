#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    string s;
    cin>>s;
    j=1;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='n'||s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e')
            continue;

        else if(s[i]!='a'||s[i]!='i'||s[i]!='o'||s[i]!='u'||s[i]!='e')
        {
            if(s[i+1]=='a'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='e')
            {
                i++;
            }
            else
            {
                j=0;
                break;
            }
        }
    }
    if(j)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

