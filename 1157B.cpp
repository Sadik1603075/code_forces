#include<bits/stdc++.h>
using namespace std;

int f[10];
string s;
vector<int>diff;


int main()
{
    int i,j,k,l,n;


    cin>>n;
    cin>>s;

    for(i=1; i<=9; i++)
        cin>>f[i];

    for(i=0; i<n; i++)
    {
        diff.push_back((f[s[i]-'0'])-(s[i]-'0'));
    }

    for(i=0; i<n; i++)
    {
        if(diff[i]>0)
        {
            while(i<n&&diff[i]>=0)
            {
                s[i] = char(f[s[i]-'0']+'0');
                i++;
            }
            break;
        }

    }

    cout<<s<<endl;

}
