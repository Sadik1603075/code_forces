#include<bits/stdc++.h>
using namespace std;
#define ll long long

deque<char>ans;
bool visited[30];
vector<char>adj[30];

int main()
{
    int t,n,i,l,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l = s.size();

        ans.clear();
        memset(visited,0,sizeof(visited));
        for(i=0;i<27;i++)adj[i].clear();


        ans.push_back(s[0]);
        visited[s[0]-'a']=1;
        int ok=1;

        for(i=1;i<l;i++)
        {
            k = s[i]-'a';
            int k1 = s[i-1]-'a';

            if(visited[k]==0)
            {
                 char f1= ans.front();
                 char f2 = ans.back();


                adj[s[i-1]-'a'].push_back(s[i]);
                adj[s[i]-'a'].push_back(s[i-1]);

                if(s[i-1]==f2)
                    ans.push_back(s[i]);
                else if(s[i-1]==f1)
                    ans.push_front(s[i]);
                else
                    ok &=0;

                visited[k]=1;
            }
            else
            {
                k = s[i]-'a';

                if(adj[k].size()==2)
                 {
                     if(adj[k][0]==s[i-1]|| adj[k][1]==s[i-1])
                        ok &=1;
                     else
                        ok &=0;
                 }
                else if(adj[k].size()==1)
                {
                    if(adj[k][0]==s[i-1])
                        ok &=1;
                     else
                        ok &=0;
                }
            }

            if(ok==0)
                break;

        }
        if(ok==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            for(i=0;i<ans.size();i++)
                printf("%c",ans[i]);
            for(i=0;i<26;i++)
            {
                if(visited[i]==0)
                    printf("%c",'a'+i);
            }
            printf("\n");
        }


    }
}
