#include<bits/stdc++.h>
using namespace std;

int arr[100];

int main()
{
    int n,i,j,k=0,l;
    cin>>n;

      if(n>=10)
        k++;

    for(i=0;;i++)
    {
        n++;
        if(n>0&&n<10)
        {
            break;
        }

        while(n%10==0)
        {
            n/=10;
        }
        if(n>0&&n<10)
        {
            break;
        }

        k++;

    }


    cout<<k+9<<endl;

}
