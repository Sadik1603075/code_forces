#include<bits/stdc++.h>
using namespace std;
int arr[1001];
set<string>s;
string ans[101];


int main()
{
    int i,j,k,l,t,n,m;
    cin>>n>>m;
    string s1,s2,s3,palindrome="";
    for(i=1; i<=n; i++)
    {
        cin>>s1;
        s.insert(s1);
    }

    set<string>:: iterator it;
    i=1;
    while(!s.empty())
    {

        it = s.begin();
        s1 = *it;

        s.erase(s1);
        s3=s1;
        reverse(s1.begin(),s1.end());
        s2=s1;
        s1=s3;

        it = s.find(s2);

        if(it==s.end())
        {
            s3 = s2;
            reverse(s2.begin(),s2.end());
            if(s2==s3 )
            {
               palindrome = s3;
            }
        }
        else
        {
            s.erase(it);
            ans[i] = s1;
            ans[i+1] = s2;
            i +=2;
        }
    }
        s3.clear();
        i--;


        for(j=1;j<=i;j+=2)
        {
            s3+=ans[j];
        }
        s3+=palindrome;

        for(j=i;j>=2;j-=2)
            s3+=ans[j];

        if(s3.size()==0)
        {
            printf("0\n");
        }
        else{
            cout<<s3.size()<<endl;
          cout<<s3<<endl;
        }

    return 0;
}

