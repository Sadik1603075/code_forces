#include<bits/stdc++.h>
using namespace std;

int arr[30];



int main()
{
    int i,j,k,l,m,n,t,val=0;
    cin>>t;
    string s;
    char ch;

    for(k=1;k<=t;k++)
    {
        cin>>s;
        l =s.size();
        vector<char>v;
        for(i=0;i<l;i++)
        {
            val =1;
            ch = s[i];
            for(j=i+1;;j++)
            {
                if(s[j]==ch)
                {
                    val++;
                    i++;
                }
                else
                    break;
            }
            if(val%2==1)
            {
                if(arr[ch-'a']==0)
                {
                    v.push_back(ch);
                    arr[ch-'a']=1;
                }
            }
        }
        sort(v.begin(),v.end());

        for(i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }


    return 0;
}
