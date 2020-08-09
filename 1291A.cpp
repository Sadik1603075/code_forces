#include<bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
    int i,j,k,l,t,n;
    cin>>t;
    string s,s1,s2;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int x=0,y=0,ans=0,l=0,k=0,l1=0,y1=0,x1=0;

        for(i=0;i<n;i++)
        {
            k = s[i]-'0';
            if(k%2==0&& l==0)
            {
                s1.clear();
                l++;
                s1+=s[i];
                for(j=i+1;j<n;j++)
                {
                    k=s[j]-'0';
                    if(y==2)
                    {
                        x=1;
                        //cout<<s1<<endl;
                        break;
                    }
                    if(k%2==1&&y<2)
                    {
                        s1+=s[j];
                        y++;
                    }
                }

            }
            else if(k%2==1 && l1==0)
            {
                s2.clear();
                s2+=s[i];
                l1++;

               for(j=i+1;j<n;j++)
               {
                   k = s[j]-'0';

                   if(k%2==1)
                   {
                       s2+=s[j];
                       x1=1;
                       break;
                   }
               }

            }
            if(x==1 || x1==1)
            {
                ans=1;
                break;
            }

        }

        if(ans)
        {
            if(x)
            {
                cout<<s1<<endl;
            }
            else
            {
                cout<<s2<<endl;
            }

        }
        else
        {
            printf("-1\n");
        }


    }
}

