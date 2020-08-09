#include<bits/stdc++.h>
using namespace std;
string sum;
string rec (int x)
{
    string s;
    while(x!=0)
    {
        s +=(x%10)+'0';
        x/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}
int r(string s)
{
    int i,j,sum=0;
    for(i=0;i<s.size();i++)
    {
        sum+=s[i]-'0';
    }
    return sum;
}

int main()
{
    int n,m,i,k,j,l;
    cin>>n>>m;

    for(i=1;i<=n/2;i++)
    {
        k = n-i;
        sum+=rec(k);
        sum+=(i);
        if(r(sum)<m)
        {            cout<<sum<<endl;
        reverse(sum.begin(),sum.end());
        cout<<sum<<endl;
            return 0;
        }


    }

}
