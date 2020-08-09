#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l=0,n;
    int arr[11];
    int sum = 0;
    for(i=1;i<11;i++)
    {
        sum +=5*i;
        arr[i] =sum;

        //cout<<arr[i]<<"  ";
    }

    scanf("%d%d",&n,&k);

    sum = 240 - k;
    for(i=1;i<11;i++)
    {
        if(sum>=arr[i])
        {
            l++;
        }
        else
        {
            break;
        }
    }
    if(l<n)
    cout<<l<<endl;
    else
        cout<<n<<endl;
    return 0;
}



