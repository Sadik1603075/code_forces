#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int coin[6][7490];
 int mycoin[5]={1,5,10,25,50};
int value(int amount);
void zero(int amount);
int main()
{
    int i,j,x,z,money;
    while(scanf("%d",&money)!=EOF)
    {
        printf("%d\n",value(money));
        zero(money);
    }


    return 0;
}
int value(int amount)
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=amount;j++)
        {
            if(i==0||j==0)
            {
                coin[i][j]=1;
            }
            else if(j>=mycoin[i])
            {
                coin[i][j] = min(1+coin[i][j-mycoin[i]],coin[i-1][j]);

            }
            else
            {
                coin[i][j] = coin[i-1][j];
            }
        }
    }

    return coin[4][amount];
}
void zero(int amount)
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=amount;j++)
        {
            coin[i][j]=0;
        }
    }

}


