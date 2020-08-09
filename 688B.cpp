#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1,s2;

    cin>>s;
    s1=s;
    reverse(s.begin(),s.end());
    s2=s1+s;
    cout<<s2<<endl;
    return 0;
}
