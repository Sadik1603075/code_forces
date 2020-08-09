#include<bits/stdc++.h>
using namespace std;

struct data
{
    bool check;
    int  id,a,b,c;
};
data tree[100005];

vector<int>v1;
vector<int>v2;
vector<int>v3;
vector<int>v4;

int arr[5*10004][4];
int see[100005];
int main()
{
    int i,j,k,l,m,n;
    cin>>n;

    for(i=1;i<=n-2;i++)
    {
        tree[i].id =i;
        tree[i].check = true;
        scanf("%d%d%d",&tree[i].a,&tree[i].b,&tree[i].c);
    }
    for(i=1;i<=n;i++)
    {
        if(see[i]==1)
        {
            v1.push_back(i);
        }
    }



}
