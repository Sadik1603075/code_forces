#include<bits/stdc++.h>
using namespace std;

int arr[1005];

int main()
{
    int i,j,k,l,m,n,t,ans;
    scanf("%d",&t);
    string s;
    for(k=1;k<=t;k++)
    {
       ans=1;
       cin>>s;
       l = s.size();

       if(l==1)
       {
           s[0]='a';
           cout<<s<<endl;
           continue;
       }

         if(s[0]=='?' && (s[1]=='b' || s[1] =='c'))
       {
           s[0] = 'a';
       }
       else if(s[0]=='?' && (s[1]=='a' || s[1] =='c'))
       {
           s[0] ='b';
       }
       else if(s[0]=='?' && (s[1]=='a' || s[1] =='b'))
       {
           s[0] = 'c';
       }
       else if(s[0]=='?' && s[1]=='?')
       {
           s[0] ='a';
       }

       for(i=1;i<l-1;i++)
       {
           if(s[i]=='?')
           {

               if(s[i-1]=='?'&&s[i+1]=='?')
               {
                   s[i] ='a';
               }
               else if(s[i-1]=='a'&& s[i+1]=='c')
               {
                   s[i] ='b';
               }
               else if(s[i-1]=='a' && s[i+1]=='b')
               {
                   s[i] ='c';
               }
               else if(s[i-1]=='b' && s[i+1]=='c')
               {
                   s[i] ='a';
               }
               else if(s[i-1]=='b' && s[i+1]=='a')
               {
                   s[i] ='c';
               }
               else if(s[i-1]=='c' && s[i+1]=='b')
               {
                   s[i] ='a';
               }
               else if(s[i-1]=='c' && s[i+1]=='a')
               {
                   s[i] ='b';
               }

               else if(s[i-1]=='a' && s[i+1]=='a')
               {
                   s[i] ='b';
               }
                else if(s[i-1]=='b' && s[i+1]=='b')
               {
                   s[i] ='c';
               }
                else if(s[i-1]=='c' && s[i+1]=='c')
               {
                   s[i] ='a';
               }


               else if(s[i-1]=='a' &&  s[i+1]=='?')
               {
                   s[i] ='b';
               }
               else if(s[i-1]=='b'&&  s[i+1]=='?')
               {
                   s[i] ='c';
               }
               else if(s[i-1]=='c'&&s[i+1]=='?')
               {
                   s[i] ='a';
               }
           }

           if(s[i]==s[i-1] || s[i]==s[i+1] )
           {
               ans = 0;
               break;
           }
       }




       if(s[l-1]=='?' && (s[l-2]=='b' || s[l-2] =='c'))
       {
           s[l-1] = 'a';
       }
       else if(s[l-1]=='?' &&( s[l-2]=='a' || s[l-2] =='c'))
       {
           s[l-1] ='b';
       }
       else if(s[l-1]=='?' && (s[l-2]=='a' || s[l-2] =='b'))
       {
           s[l-1] = 'c';
       }



       if(ans==1)
       {
           cout<<s<<endl;
       }
       else
       {
           printf("-1\n");

       }


    }

    return 0;
}
