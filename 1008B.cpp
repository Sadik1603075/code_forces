#include<bits/stdc++.h>
using namespace std;
int wi[100005];
int hi[100005];
 vector<int>v1,v2;

int main()
{
    int i,j,m,n;
    cin>>n;

    for(i=0;i<n;i++)
    {
        scanf("%d%d",&wi[i],&hi[i]);
    }
    m= wi[0];
    v1.push_back(m);

    j=1;
    for(i=1;i<n;i++)
    {
        if(wi[i]==v1[i-1])
        {
            v1.push_back(wi[i]);
        }
        else if(hi[i]==v1[i-1])
        {
            v1.push_back(hi[i]);
        }
        else if(wi[i]<v1[i-1]&&hi[i]<v1[i-1])
        {
              v1.push_back(max(wi[i],hi[i]));
        }
        else if(wi[i]<v1[i-1])
        {
            v1.push_back(wi[i]);
        }
        else if(hi[i]<v1[i-1])
        {
            v1.push_back(hi[i]);
        }
        else
        {
            j=0;
            break;
        }
    }

    if(j==1)
    {
        printf("YES\n");
        return 0;
    }
    j=1;
    v2.push_back(hi[0]);

    for(i=1;i<n;i++)
    {
        if(wi[i]==v2[i-1])
        {
            v2.push_back(wi[i]);
        }
        else if(hi[i]==v2[i-1])
        {
            v2.push_back(hi[i]);
        }
        else if(wi[i]<v2[i-1]&&hi[i]<v2[i-1])
        {
              v2.push_back(max(wi[i],hi[i]));
        }
        else if(wi[i]<v2[i-1])
        {
              v2.push_back(wi[i]);
        }
        else if(hi[i]<v2[i-1])
        {
            v2.push_back(hi[i]);
        }
        else
        {
            j=0;
            break;
        }
    }
    if(j==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;

}
