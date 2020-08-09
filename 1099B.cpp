#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,l;
    cin>>n;
    k=6;
    i=3;
    j=1;
    while(1)
    {
        if(n<=3)
        {
            cout<<n+1<<endl;
            break;
        }
        else if(n==4)
        {
            cout<<4<<endl;
            break;
        }
        else if(n==5||n==6)
        {
             cout<<5<<endl;
             break;
        }

        if(j==1)
        {
            k+=i;
            if(n>=(k-i)&&k>=n)
            {
                cout<<2*i<<endl;
                //cout<<k;
                break;
            }
            j++;
        }
        else if(j==2)
        {
            k+=i;
            if(n>=(k-i)&&k>=n)
            {
              cout<<(2*i)+1<<endl;
              //cout<<k;
              break;
            }
            i++;
            j=1;
        }
    }
}
