#include<bits/stdc++.h>
using namespace std;
int arr[5];

int main()
{
    int i,j=0,k=0,l=0;
    string s,s1;
    cin>>s;


      for(i=0;i<s.size();i++)
    {
        arr[s[i]-'a']++;

        if(s[i]-'a'==0)
            {if(j==0&&k==0)
                {l=1;
                continue;
                }
                else
                    {
                        printf("NO\n");
                        return 0;
                    }
            }
         if(s[i]-'a'==1)
         {
             if(l==1&&k==0)
             {
                 j=1;
                 continue;
             }
             else
             {
                  printf("NO\n");
                        return 0;
             }
         }
         if(s[i]-'a'==2)
         {
              if(l==1&&j==1)
             {
                 k=1;
                 continue;
             }
             else
             {
                  printf("NO\n");
                        return 0;
             }
         }
    }


    if((arr[0]==arr[2]||arr[1]==arr[2])&&arr[0]>0&&arr[1]>0&&arr[2]>0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
