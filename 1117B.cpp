#include<bits/stdc++.h>
using namespace std;

long long arr[2*100005];


struct emote
{
    long long no,val;
};

bool cmp(emote A,emote B)
{
    if(A.val==B.val)
        return A.no>B.no;
    return A.val>B.val;
}
vector<emote>v;


int main()
{
    long long n,m,k,i,j,l,mx1,mx2;
    cin>>n>>m>>k;
    emote A;
    long long sum=0,a,b;
    for(i=1;i<=n;i++)
    {
        scanf("%I64d",&arr[i]);
        A.val = arr[i];
        A.no = i;
        v.push_back(A);
        }
    sort(v.begin(),v.end(),cmp);

    a = v[0].val;
    b = v[1].val;

    //cout<<a<<" "<<b<<endl;

    l = m/(k+1);
    mx1 = l*k;
    mx2 = l;

    //cout<<mx1<<" "<<mx2<<endl;
    j = m%(k+1);
    m-=j;
    m-=mx1;
    mx2=m;

    sum = mx1*a+mx2*b+j*mx1;
    cout<<sum<<endl;


}
