#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[30];

int main()
{
    int a;
    cin>>a;
    arr[0]=65;

    for(int i=1;i<26;i++)
    {
        arr[i] = arr[i-1]+1;
    }


    ll sum=0;
    ll mul =1;
    while(a--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            sum += (arr[s[i]-'A']);
            mul *= (arr[s[i]-'A']);
        }
        cout<<sum<<"   "<<mul<<endl;
        cout<<mul/sum<<endl;
        sum=0;
        mul=1;
    }



    return 0;
}


