#include<bits/stdc++.h>
using namespace std;

vector<char>v;

string LCS(string s1,string s2)
{
    int l1,l2,i,j,k,l,m=0;
    l1 = s1.size()+1;
    l2 = s2.size()+1;


    int T[l2+5][l1+5];

    for(i=0;i<=l1;i++)
            T[0][i]=0;
    for(i=0;i<=l2;i++)
            T[i][0]=0;

    for(i=1;i<l2;i++)
    {
        for(j=1;j<l1;j++)
        {
            if(s2[i-1]==s1[j-1])
            {
                T[i][j] = T[i-1][j-1]+1;
            }
            else
            {
                T[i][j] = max(T[i-1][j],T[i][j-1]);
            }
             m = max(T[i][j],m);
        }
    }
    string s;

    m--;
    i= l2;
    j =l1;

    for(i=0;i<=l1;i++)
    {
        for(j=0;j<=l2;j++)
        {
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
    while(i!=0 || j!=0)
    {

        if(T[i][j]==T[i-1][j])
        {
            i--;
        }
        else if(T[i][j]==T[i][j-1])
        {
            j--;
        }
        else
        {

            s += s2[j-2];
            i--;
            j--;
        }

    }
    s+='\0';

    reverse(s.begin(),s.end());
    return s;

}
int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;
    string s1,s2,s;

    while(t--)
    {
        cin>>s1>>s2;
        s= LCS(s1,s2);
        cout<<s<<endl;

    }
    return 0;
}

