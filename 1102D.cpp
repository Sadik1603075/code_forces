#include<bits/stdc++.h>
using namespace std;
int arr[3];

int main()
{
    int n,i,j,k,l;
    string s;
    cin>>n;
    cin>>s;
    l = s.size();
    for(i=0; i<l; i++)
    {
        if(s[i]=='1')
            arr[1]++;
        else if(s[i]=='0')
            arr[0]++;
        else
            arr[2]++;
    }
    k = n/3;
    if(arr[0]==k&&arr[1]==k&&arr[2]==k)
    {
        cout<<s<<endl;
        return 0;
    }
    int a0=0,a1=0,a2=0;

    if(arr[0]>k)
    {
        a0 = arr[0]-k;
    }
    if(arr[1]>k)
    {
        a1= arr[1]-k;
    }

    if(arr[2]>k)
    {
        a2 = arr[2]-k;
    }

    j=0;
    if(a0>0)
    {
        j=0;
        for(i=0; i<l; i++)
        {
            if(s[i]=='0')
            {
                if(j<k)
                {
                    j++;
                }
                else if(j==k)
                    break;
            }
        }
        for(i=i; i<l; i++)
        {
            if(s[i]=='0')
            {
                if(arr[1]<k&&arr[0]>k)
                {
                    s[i]='1';
                    arr[1]++;
                    arr[0]--;
                }
                else
                    break;
            }
        }
        for(i=i; i<l; i++)
        {
            if(s[i]=='0')
            {
                if(arr[2]<k&&arr[0]>k)
                {
                    s[i]='2';
                    arr[2]++;
                    arr[0]--;
                }
                else
                    break;
            }
        }
    }
    if(a1>0)
    {
        j=0;
        for(i=0; i<l; i++)
        {
            if(s[i]=='1')
            {
                if(arr[0]<k&&arr[1]>k)
                {
                    s[i] ='0';
                    arr[0]++;
                    arr[1]--;
                }
                else
                    break;
            }
        }
        for(i=i; i<l; i++)
        {
            if(s[i]=='1')
            {
                if(j<k)
                {
                    j++;
                }
                else
                    break;
            }
        }
        for(i=i; i<l; i++)
        {
            if(s[i]=='1')
            {
                if(arr[2]<k&&arr[1]>k)
                {
                    s[i]='2';
                    arr[2]++;
                    arr[1]--;

                }
                else
                    break;
            }
        }
    }
    if(a2>0)
    {
        j=0;
        for(i=0; i<l; i++)
        {
            if(s[i]=='2')
            {
                if(arr[0]<k&&arr[2]>k)
                {
                    s[i] ='0';
                    arr[0]++;
                    arr[2]--;
                }
                else
                    break;
            }
        }


        for(i=i; i<l; i++)
        {
            if(s[i]=='2')
            {
                if(arr[1]<k&&arr[2]>k)
                {
                    s[i] ='1';
                    arr[1]++;
                    arr[2]--;
                }
                else
                    break;
            }
        }
    }

    cout<<s<<endl;
}
