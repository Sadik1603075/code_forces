#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll arr[6]={10,11,12,13,14,15};
ll arr1[10];

int main()
{
    string s;

    cin>>s;
    int k=0;
    ll sum=0;
    arr1[0]=1;
    for(int i=1;i<=9;i++)
    {
        arr1[i] =(arr1[i-1]*16);
    }

    for(int i=6;i>=0;i--)
    {
        if(isdigit(s[i]))
        {
            int val = s[i]-'0';
            sum += (val*arr1[k]);

        }
        else{
            int val = arr[s[i]-'A'];
            sum += val * arr1[k];
        }
        k++;

    }
    //cout<<sum<<endl;
    if(sum%2)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}

