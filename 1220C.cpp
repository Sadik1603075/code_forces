#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l;
    string s;
    cin>>s;
    char ch = s[0];
    cout<<"Mike"<<endl;

    for(i=1;i<s.size();i++)
    {
        if(s[i]>ch)
            cout<<"Ann"<<endl;
        else
            cout<<"Mike"<<endl;
        if(s[i]<ch)
            ch=s[i];
    }
}
