#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
using namespace std;
int arr[100000];
int main()
{
    int n,i,j,sum1=0,sum2=0,k,zero;

for(j=1,k=0;k<10000;j++){

    for( i =1;i<=64;i++)
    {
        if(pow(2,i)>j)
            break;
        sum1 += j/pow(2,i);
    }

    for( i =1;i<=64;i++)
    {
        if(pow(5,i)>j)
            break;

        sum2 += j/pow(5,i);
    }
    zero = min(sum1,sum2);
    if(zero>0){
    arr[k]= zero;
    k++;
    }
}
for(i=0;i<100;i++)
    printf("%d ",arr[i]);

    return 0;

}
