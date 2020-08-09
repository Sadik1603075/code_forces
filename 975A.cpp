#include<bits/stdc++.h>
using namespace std;

int arr[26];
map<string,int>mp;
int main()
{
    int i,j,k,l,m,n;
    cin>>n;
    string s1,s2,s3[1003];
    for(i=0;i<n;i++)
    {
        cin>>s1;
        l = s1.size();

        sort(s1.begin(),s1.end());

        for(j=0;j<l;j++)
        {
            arr[s1[j]-'a']++;
            if(arr[s1[j]-'a']==1)
            {
                s2+=s1[j];
            }
        }
        mp[s2]++;
        s2.clear();
        memset(arr,0,sizeof(arr));
    }
    cout<<mp.size()<<endl;
}
