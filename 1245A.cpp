#include<bits/stdc++.h>
using namespace std;

int arr[1005];

int main()
{
    int i,j,k,m,n,t,a,b,c;
    cin>>t;
    double l;

    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);
        scanf("%d%d%d",&a,&b,&c);

        string s,s1;
        cin>>s;
        s1=s;
        int win=0;

        for(i=0; i<s.size(); i++)
        {

            if(s[i]=='R')
            {
                if(b>0)
                {
                    s1[i]='P';
                    b--;
                    win++;
                }
                else
                {
                    s1[i]='*';
                }

            }

            else if(s[i]=='P')
            {
                if(c>0)
                {
                    s1[i]='S';
                    c--;
                    win++;
                }
                else
                {
                    s1[i]='*';
                }

            }

            else
            {
                if(a>0)
                {
                    s1[i]='R';
                    a--;
                    win++;

                }
                else
                {
                    s1[i]='*';
                }


            }
        }


        l =(n*1.00)/(2.00);
        l = ceil(l);
        m = int(l);

        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]=='*')
            {
                if(a>0)
                {
                    s1[i]='R';
                    a--;
                }
                else if(b>0)
                {
                    s1[i]='P';
                    b--;
                }
                else
                {
                    s1[i]='S';
                    c--;
                }
            }
        }

        if(win >= m)
        {
            printf("YES\n");
            cout<<s1<<endl;
        }
        else
        {
            printf("NO\n");

        }



    }

    return 0;
}
