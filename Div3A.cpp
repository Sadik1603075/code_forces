#include<bits/stdc++.h>
using namespace std;

int arr[11];

int main()
{
    long long n,k,i,j,l;

    cin>>n>>k;

    l = n;

    for(i=0;i<k;i++)
    {
        if(n%10>0)
        {
            n--;
        }
        else
        {
            n/=10;
        }
    }
    cout<<n<<endl;


}

