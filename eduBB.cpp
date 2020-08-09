#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
int main()
{
    long long i,j,k=0,l,c1=0,c2=0,a,b,x,n;
    string s;

    cin>>n>>a>>b;
    long long A=0,B=0;


    cin>>s;
    for(i=0;i<=s.size();i++)
    {
        if(s[i]=='.')
            {
                c1++;
            }
        else
        {

            if(c1!=0&&c1!=1)
            {
                if(c1%2==0)
                {
                    A+=c1/2;
                    B+=c1/2;
                }
                else
                {
                    A+=c1/2+1;
                    B+=c1/2;
                }
            }
            else
            {
                if(c1==1)
                {
                    A+=1;
                }
            }
            //cout<<c1<<" "<<c2<<"  "<<A<<" "<<B<<" "<<endl;
            c1=0;
        }
    }
   if(a>b)
   {
       if(a>=A)
       {
           k+=A;
       }
       else
       {
           k+=a;
       }
       if(b>=B)
       {
           k+=B;
       }
       else
       {
          k+=b;
       }
   }
   else if(b>a)
   {
       if(b>=A)
       {
           k+=A;
       }
       else
       {
           k+=b;
       }
       if(a>=B)
       {
           k+=B;
       }
       else
       {
          k+=a;
       }
   }
   else
   {
       B++;
       if(a+b>=B)
       {
           k+=B;
       }
       else{
        k=a+b;
       }


   }
   cout<<k<<endl;

    return 0;
}

