#include<bits/stdc++.h>
using namespace std;

#define N 10
#define count 0

void producer(void)
{
    while(true)
    {
        if(count==N)
            sleep();
        item = produced_item();
        count = count+1;
        insert(item);

        if(count==1)
            wake_up(consumer);
    }
}
void consumer(void)
{
    while(true)
    {
        if(count ==0)
            sleep();
        item = removed_item();
        count -=1;
        if(count==N-1)
            wake_up(producer);
        consume_item(item);
    }
}
