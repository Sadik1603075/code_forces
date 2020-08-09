#include<bits/stdc++.h>
#include<algorithm>
int arr[105];
int main()
{
    int h1,h2,a1,a2,c1,i,j,l;

    scanf("%d%d%d",&h1,&a1,&c1);
    scanf("%d%d",&h2,&a2);
    i=1;
    l =0;
    arr[i] = 1;
    l++;
    h2 = h2-a1;
    h1 = h1-a2;

    while(1)
    {
        i++;

        if(h2-a1<=0)
        {
            arr[i] = 1;
            i++;
            l++;
            break;
        }

        if((h1-a2)>=a2)
        {
            arr[i] =1;
            l++;
            h2 = h2-a1;
            h1 = h1-a2;
        }
        else
        {
            arr[i] = 2;
            h1 += c1;
            l++;


        }


    }
    printf("%d\n",l);
    for(i=1;i<=l;i++)
    {
        if(arr[i]==1)
        {
            printf("STRIKE\n");
        }
        else if(arr[i]==2)
        {
            printf("HEAL\n");
        }
        else
            break;
    }
}
