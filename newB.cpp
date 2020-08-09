
#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
int main()
{
    long long i,j,k=0,l,c1=0,c2=0,a,b,x,n;
    string s;

    cin>>n>>a>>b;
    long long x1=a,x2=b;


    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='.')
            {
                c1++;
            }
        else
        {
            if(c1!=0)
                v.push_back(c1);
            c1=0;

        }
   }
    l = min(a,b);
    for(i=0;i<v.size();i++)
    {
        x = v[i]/2;
        if(v[i]%2==0&&b>=x&&a>=x)
        {
            a-=x;
            b-=x;
            k +=v[i];
        }
        else if(v[i]%2==0&&b>=x&&a<x)
        {
            b-=x;
            k +=x+a;
            a=0;
        }
        else if(v[i]%2==0&&b<x&&a>=x)
        {
            a-=x;
            k +=x+b;
            b=0;
        }
        else if(v[i]%2==0&&b<x&&a<x)
        {
            k+=a+b;
            a=0;
            b=0;
            break;
        }
        else if(v[i]%2==0&&x<a&&x<b)
        {
            a-=x;
            b-=x;
            k+=v[i];
        }
        else if(v[i]%2==0&&x<a&&x>b)
        {
            k+=x+b;
            b=0;
            a-=x;
        }
        else  if(v[i]%2==0&&x<b&&x>a)
        {
            k+=x+a;
            a=0;
            b-=x;
        }
        else if(v[i]%2!=0&&a>=x+1&&b>=x&&a>b)
        {
            a-=x+1;
            b-=x;
            k+=v[i];
        }
        else if(v[i]%2!=0&&b>=x+1&&a>=x&&b>a)
        {
            b-=x+1;
            a-=x;
            k+=v[i];
        }
        else if(v[i]%2!=0&&b>=x+1&&a<x)
        {
            k+=x+1+a;
            a=0;
            b-=x+1;
        }
        else if(v[i]%2!=0&&a>=x+1&&b<x)
        {
            k+=x+1+b;
            b=0;
            a-=x+1;
        }
        else if(v[i]%2!=0&&a<x&&b<x)
        {
            k+=a+b;
            a=0;
            b=0;
            break;
        }
        else if(v[i]%2!=0&&x<a&&x<b)
        {
            k+=v[i];
            a-=x;
            b-=x;
        }
         else if(v[i]%2!=0&&x<a&&x>b)
        {
            k+=x+b+1;
            a-=x+1;
            b=0;
        }
        else if(v[i]%2!=0&&x>a&&x<b)
        {
            k+=x+a+1;
            b-=x+1;
            a=0;
        }

    }
    if(k>=a+b)
      cout<<a+b<<endl;
    else
        cout<<k<<endl;


    return 0;
}

