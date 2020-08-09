#include<iostream>
#include<stdio.h>
#include<cstring>
int arr[26];
using namespace std;
int main()
{
    char s1[200];
    int i,j=0,l,k,n,maximum=0,sum=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);

    for (i=0;i<=n ; i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s1[j] = s[i];
            j++;
        }
        else
        {
            sum=0;
            s1[j]='\0';
            for(k=0;k<j;k++)
            {
                arr[s1[k]-'a']=1;
            }
            for(k=0;k<26;k++)
            {
                sum +=arr[k];
                arr[k]=0;
            }
            if(sum>maximum)
            {
                maximum = sum;
            }
            j=0;
        }

    }
    printf("%d\n",maximum);


    return 0;
}




