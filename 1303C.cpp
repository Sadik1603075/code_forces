#include<bits/stdc++.h>
using namespace std;
vector<char>alpha[27],ans;
set<char>st;

bool visited[30];

int main()
{
    int i,j,k,l,m,n,t;

    cin>>t;
    string s;

    while(t--)
    {
        cin>>s;
        l = s.size();

        st.clear();
        for(i=0; i<27; i++)
            alpha[i].clear();
        memset(visited,0,sizeof(visited));

        int ok =1;
        st.insert(s[0]);
        st.insert(s[l-1]);
        for(i=1; i<l-1; i++)
        {
            st.insert(s[i]);
            k = s[i]-'a';
            if(visited[k]==0)
            {
                alpha[k].push_back(s[i-1]);
                alpha[k].push_back(s[i+1]);
                visited[k]=1;
            }
            else
            {
                if(s[i-1]==alpha[k][0] || s[i-1]==alpha[k][1])
                {
                    if(s[i+1]==alpha[k][0] || s[i+1]==alpha[k][1])
                    {
                        ok = 1;
                    }
                    else
                    {
                        ok=0;
                    }
                }
                else
                    ok=0;
            }
            if(ok==0)
                break;
        }
        k = s[0]-'a';

        if(visited[k]==0)
        {
            alpha[k].push_back(s[1]);
        }
        else
        {
            if(s[1]==alpha[k][0] || s[1]==alpha[k][1]) ok &= 1;

            else ok=0;
        }

        k = s[l-1]-'a';

        if(visited[k]==0)
        {
            alpha[k].push_back(s[l-2]);
        }
        else
        {
            if(s[l-2]==alpha[k][0] || s[l-2]==alpha[k][1]) ok &= 1;

            else ok=0;
        }

        if(ok==0)
        {
            printf("NO\n");
            continue;
        }
        set<char>check;

        for(i=0; i<=l-st.size(); i++)
        {
            memset(visited,0,sizeof(visited));
            ans.clear();

            for(j=i; j<i+st.size(); j++)
            {
                if(visited[s[j]-'a']==0)
                 {
                     ans.push_back(s[j]);
                     visited[s[j]-'a']=1;
                 }
            }
            if(ans.size()==st.size())
            {
                k = ans[0]-'a';
                if(alpha[k].size()==2)
                    if(alpha[k][0] == alpha[k][1])
                    {
                    break;
                    }
                else
                    break;

            }
        }

        if(ans.size()!=st.size())
        {
            printf("NO\n");
            continue;
        }

        k =  ans[0]-'a';

        printf("YES\n");
        for(i=0; i<ans.size(); i++)
        {
            printf("%c",ans[i]);
        }
        for(i=0;i<26;i++)
        {
            if(visited[i]==0)
            {
                printf("%c",'a'+i);
            }
        }
        printf("\n");

    }
}
