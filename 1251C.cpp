#include<bits/stdc++.h>
using namespace std;

deque<int>v1;
deque<int>v2;
vector<int>v;


int main()
{
    int i,j,k,l,m,n,t,x,y,l1,l2;
    cin>>t;
    string s;

    for(k=1; k<=t; k++)
    {
        cin>>s;
        m =s.size();

        for(i=0; i<m; i++)
        {
            l = s[i]-'0';
            if(l%2==0)
            {
                v2.push_back(l);
            }
            else
            {
                v1.push_back(l);
            }
        }



        while(1)
        {
            if(v1.empty())
            {
                while(!v2.empty())
                {
                    printf("%d",v2.front());
                    v2.pop_front();
                }
                break;
            }
            if(v2.empty())
            {
                while(!v1.empty())
                {
                    printf("%d",v1.front());
                    v1.pop_front();
                }
                break;
            }

            if(v1.front()<v2.front())
            {
                printf("%d",v1.front());
                v1.pop_front();
            }
            else
            {
                printf("%d",v2.front());
                v2.pop_front();
            }
        }


        cout<<endl;


    }

    return 0;
}

