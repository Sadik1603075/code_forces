#include<bits/stdc++.h>
using namespace std;
void rt();
void tr();
int sum=0;
string s,s2;
int main()
{
    long long n,m;
    int p,x=0,r=0,j,k,l,i,z,z1=0,z2=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s;
        x=0;r=0;sum=0,l=0,j=0,z1=0,r=0;
        for(j=1;j<s.size();j++)
        {
            if(s[j]=='C')
                {
                break;
                }

        }
        for(z=0;z<s.size();z++)
        {
            if(isalpha(s[z]))
            {
               if(z1==2)
               {r=1;
               break;}
               else
               z1=1;
            }
            else
            {
                z1=2;
            }
        }

            if(r==0)
            {
                for(k=0;k<s.size();k++)
                {
                    if(isdigit(s[k]))
                        break;
                }
                l=k;
                l--;
                x=0;
                while(l!=-1)
                {
                    sum +=pow(26,l)*(s[x]-'A'+1);
                    l--;
                    x++;
                }
                cout<<'R';
                for(j=k;j<s.size();j++)
                {
                    cout<<s[j];
                }
                cout<<"C"<<sum<<endl;
            }

            else
        {
            x=0;
            sum=0;
            s2.clear();

              for(k=j+1;k<s.size();k++)
              {
                 p = s[k]-'0';
                 sum +=p;
                 sum*=10;
              }
              sum/=10;
              //cout<<sum<<endl;
                while(sum!=0){
                if(sum%26==0)
                {
                    rt();
                }
                else{
                    tr();

                }
                }

            reverse(s2.begin(),s2.end());
              cout<<s2;


                for(x=1;x<j;x++)
              {
                  cout<<s[x];
              }
              cout<<endl;
              }


        }



}

void rt()
{
    int k,l=0;
                        k= sum%26;
                        k-=2;
                        if(k>=0)
                        s2 +=('A'+k);
                        else
                        {
                            s2+='Z';
                            l=1;
                        }

                      sum/=26;
                      if(l==1)
                      {
                          sum--;
                      }


}
void tr()
{
    int k;
                  k = sum%26;
                  k--;
                  if(k>=0)
                    s2 +=('A'+k);
                    else
                        s2+='Z';

                      sum/=26;

}
