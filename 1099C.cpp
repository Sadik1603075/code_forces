#include<bits/stdc++.h>
using namespace std;

int main()
{
    int snow=0,candy=0,i,j,sum=0,sum1=0,sum2=0,k,l,l1,l2;
    string s,s1,s2,s3;
    cin>>s>>k;

    for(i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
            s3+=s[i];
        }
        else
        {
            if(s[i]=='*')
                snow++;
            else
                candy++;

           sum++;
        }
    }
    if(s3.size()==k)
    {
        cout<<s3<<endl;
    }
    l =s3.size();

    if(l<k)
    {
        sum1=k-l;

        if(snow==0)
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
      for(i=0;i<s.size();i++)
      {
          if(s[i]!='*')
          {
              if(isalpha(s[i]))
                cout<<s[i];
          }
          else
            break;
      }
      for(j=1;j<=sum1;j++)
      {
          cout<<s[i-1];
      }
      for(j=i+1;j<=s.size();j++)
      {
          if(isalpha(s[j]))
          {
              cout<<s[j];
          }
      }
      cout<<endl;
    }
    if(l>k)
    {
        sum2=l-k;
        if(sum2>sum)
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
        for(i=0;i<s.size()-1;i++)
        {
            if(isalpha(s[i+1]))
            {
                if(isalpha(s[i]))
                    cout<<s[i];
            }
            else
            {
                sum2--;
            }
            if(sum2==0)
                break;
        }
        for(j=i+1;j<s.size();j++)
        {
            if(isalpha(s[j]))
            {
                cout<<s[j];
            }
        }
        cout<<endl;
    }

}
