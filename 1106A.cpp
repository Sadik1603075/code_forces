#include<bits/stdc++.h>
using namespace std;

string arr[505];

int main()
{
    int i,j,k,n,m,l;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=0;

    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(arr[i][j]=='X')
            {
                if(arr[i-1][j-1]=='X'&&arr[i-1][j+1]=='X'&&arr[i+1][j-1]=='X'&&arr[i+1][j+1]=='X')
                {
                    c++;
                }
            }
        }
    }
    cout<<c<<endl;

}
